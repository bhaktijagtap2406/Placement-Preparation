CREATE DATABASE placement_db;

USE placement_db;

CREATE TABLE students (
    id INT,
    name VARCHAR(50),
    age INT,
    city VARCHAR(50)
);

INSERT INTO students VALUES
(1, 'Alice', 20, 'Pune'),
(2, 'Bob', 21, 'Mumbai'),
(3, 'Charlie', 19, 'Pune'),
(4, 'David', 22, 'Delhi');

select name from students;

select * from students;

select name , age from students;

SELECT *
FROM students
WHERE city = 'Pune';

SELECT name
FROM students
WHERE age > 20;

SELECT *
FROM students
WHERE name = 'Alice';

SELECT *
FROM students
WHERE age < 21;

SELECT *
FROM students
WHERE city != 'Pune'; -- != and <> is same <> supported by standerd sql and != supported by Mysql

SELECT name , city
FROM students
WHERE age <= 20; 


SELECT *
FROM students
WHERE city = 'Pune' AND age >= 20;

SELECT *
FROM students
WHERE city = 'Mumbai' OR age = 19;

SELECT *
FROM students
WHERE NOT city = 'Delhi';

SELECT *
FROM students
ORDER BY name ASC;

SELECT *
FROM students
ORDER BY age DESC;

SELECT name , city
FROM students
ORDER BY city ASC;


SELECT DISTINCT city
FROM students;

SELECT *
FROM students
LIMIT 3;

SELECT *
FROM students
ORDER BY age DESC
LIMIT 2;