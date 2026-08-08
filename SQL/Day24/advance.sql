SELECT
    Employee,
    Department,
    Salary,
    LAG(Salary) OVER(
        PARTITION BY Department
        ORDER BY Salary
    ) AS PreviousSalary
FROM Salary;

SELECT
    Employee,
    Department,
    Salary,
    LEAD(Salary) OVER( 
        PARTITION BY Department
        ORDER BY Salary
    ) AS NextSalary 
FROM Salary;

CASE
    WHEN Salary > 80000 THEN 'High'
    WHEN Salary BETWEEN 50000 AND 80000 THEN 'Medium'
    ELSE 'Low'
END AS SalaryLevel

SELECT
    Employee,
    COALESCE(Bonus, 0) AS FinalBonus
FROM Employees;

SELECT
    Employee,
    Salary,
    NTILE(4) OVER(ORDER BY Salary) AS GroupNo
FROM Employees;