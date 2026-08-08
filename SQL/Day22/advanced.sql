SELECT
    Employee,
    Salary,
    LEAD(Salary) OVER(ORDER BY Salary) AS NextSalary
FROM Employees;

SELECT
    Month,
    Sales,
    LEAD(Sales) OVER(ORDER BY Month) AS NextSales
FROM Sales;

SELECT
    Month,
    Sales,
    LAG(Sales) OVER(ORDER BY Month) AS PreviousSales
FROM Sales;

SELECT
    Month,
    Sales,
    LAG(Sales) OVER(ORDER BY Month) AS PreviousSales,
    Sales - LAG(Sales) OVER(ORDER BY Month) AS Difference
FROM Sales;

CASE
    WHEN Marks >= 90 THEN 'A'
    WHEN Marks >= 75 THEN 'B'
    ELSE 'C'
END

SELECT
    Employee,
    COALESCE(Bonus, 0) AS FinalBonus
FROM Employees;

SELECT
    Employee,
    Salary,
    NTILE(3) OVER(ORDER BY Salary) AS GroupNo
FROM Employees;

