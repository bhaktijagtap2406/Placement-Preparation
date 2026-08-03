SELECT
    Name,
    Salary,
    ROW_NUMBER() OVER(ORDER BY Salary DESC) AS RowNum
FROM Employee;

SELECT
    Name,
    Dept,
    Salary,
    ROW_NUMBER() OVER(
        PARTITION BY Dept
        ORDER BY Salary DESC
    ) AS RankInDept
FROM Employee;

SELECT
    Name,
    Dept,
    Salary,
    RANK() OVER(
        PARTITION BY Dept
        ORDER BY Salary DESC
    ) AS RankInDept
FROM Employee;

WITH EmployeeRank AS (
    SELECT
        Name,
        Dept,
        Salary,
        DENSE_RANK() OVER(
            PARTITION BY Dept
            ORDER BY Salary DESC
        ) AS RankInDept
    FROM Employee
)

SELECT
    Name,
    Dept,
    Salary
FROM EmployeeRank
WHERE RankInDept = 2;

WITH EmployeeRank AS (
    SELECT
        Name,
        Dept,
        Salary,
        DENSE_RANK() OVER(
            PARTITION BY Dept
            ORDER BY Salary DESC
        ) AS RankInDept
    FROM Employee
)

SELECT
    Name,
    Dept,
    Salary
FROM EmployeeRank
WHERE RankInDept <= 2;