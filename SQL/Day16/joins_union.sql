SELECT
    e.Name AS Employee,
    m.Name AS Manager
FROM Employees e
LEFT JOIN Employees m
ON e.ManagerID = m.EmpID;

SELECT Name FROM A
UNION
SELECT Name FROM B;

SELECT Name FROM A
UNION ALL
SELECT Name FROM B;

SELECT Name
FROM Employee

UNION

SELECT Department
FROM Department;