SELECT e1.Name
FROM Employee e1
WHERE Salary >
(
    SELECT AVG(Salary)
    FROM Employee e2
    WHERE e2.Dept = e1.Dept
);

CREATE VIEW EmployeeDetails AS
SELECT Name, Dept
FROM Employee;

SELECT *
FROM EmployeeDetails;

CREATE VIEW HighSalary AS
SELECT Name, Salary
FROM Employee
WHERE Salary > 60000;