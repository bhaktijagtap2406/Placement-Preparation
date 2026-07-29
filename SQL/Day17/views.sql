SELECT e1.Name
FROM Employee e1
WHERE Salary >
(
    SELECT AVG(Salary)
    FROM Employee e2
    WHERE e2.Dept = e1.Dept
);