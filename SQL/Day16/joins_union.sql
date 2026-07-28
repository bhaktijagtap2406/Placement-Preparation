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

SELECT *
FROM Employees
WHERE salary > (
    SELECT AVG(salary)
    FROM Employees
);

SELECT name
FROM Employees
WHERE department_id = (
    SELECT department_id
    FROM Departments
    WHERE department_name = 'Engineering'
);

SELECT name
FROM Employees
WHERE department_id IN (
    SELECT department_id
    FROM Projects
);

SELECT name, salary
FROM Employees e
WHERE salary > (
    SELECT AVG(salary)
    FROM Employees
    WHERE department_id = e.department_id
);

SELECT department_name
FROM Departments d
WHERE EXISTS (
    SELECT *
    FROM Employees e
    WHERE e.department_id = d.department_id
);

SELECT
    name,
    (
        SELECT department_name
        FROM Departments d
        WHERE d.department_id = e.department_id
    ) AS department
FROM Employees e;

SELECT AVG(salary)
FROM (
    SELECT salary
    FROM Employees
    WHERE salary > 50000
) AS high_salary;

