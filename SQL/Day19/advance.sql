WITH IT_Employees AS (
    SELECT *
    FROM Employee
    WHERE department='IT'
)

SELECT *
FROM IT_Employees;

WITH AvgSalary AS (
    SELECT AVG(salary) AS average_salary
    FROM Employee
)

SELECT *
FROM AvgSalary;

WITH AvgSalary AS (
    SELECT AVG(salary) AS avg_sal
    FROM Employee
)

SELECT *
FROM Employee
WHERE salary > (SELECT avg_sal FROM AvgSalary);

WITH IT_Employees AS (
    SELECT *
    FROM Employee
    WHERE department = 'IT'
),

HighSalary_IT AS (
    SELECT *
    FROM IT_Employees
    WHERE salary > 70000
)

SELECT *
FROM HighSalary_IT;

SELECT 
    name,
    salary,
    AVG(salary) OVER() AS avg_salary
FROM Employee;

SELECT
    name,
    salary,
    ROW_NUMBER() OVER(ORDER BY salary DESC) AS rank
FROM Employee;

SELECT
    name,
    salary,
    RANK() OVER(ORDER BY salary DESC) AS rank
FROM Employee;

SELECT
    name,
    salary,
    DENSE_RANK() OVER(ORDER BY salary DESC) AS rank
FROM Employee;

SELECT
    name,
    department,
    salary,
    RANK() OVER(
        PARTITION BY department
        ORDER BY salary DESC
    ) AS dept_rank
FROM Employee;

WITH RankedEmployees AS (

    SELECT
        name,
        department,
        salary,
        RANK() OVER(
            PARTITION BY department
            ORDER BY salary DESC
        ) AS salary_rank

    FROM Employee
)

SELECT *
FROM RankedEmployees
WHERE salary_rank <= 3;

WITH SalaryRank AS (

    SELECT
        name,
        salary,
        DENSE_RANK() OVER(
            ORDER BY salary DESC
        ) AS rnk

    FROM Employee
)

SELECT *
FROM SalaryRank
WHERE rnk = 2;

WITH DeptSalary AS (

    SELECT
        name,
        department,
        salary,
        RANK() OVER(
            PARTITION BY department
            ORDER BY salary DESC
        ) AS rnk

    FROM Employee
)

SELECT *
FROM DeptSalary
WHERE rnk = 1;

