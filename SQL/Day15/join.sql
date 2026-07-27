SELECT *
FROM Employees
RIGHT JOIN Departments
ON Employees.DeptID = Departments.DeptID;

SELECT *
FROM Employees
FULL OUTER JOIN Departments
ON Employees.DeptID = Departments.DeptID;

SELECT *
FROM Employees
LEFT JOIN Departments
ON Employees.DeptID = Departments.DeptID
WHERE Departments.DeptID IS NULL;

SELECT *
FROM Employees
RIGHT JOIN Departments
ON Employees.DeptID = Departments.DeptID
WHERE Employees.DeptID IS NULL;