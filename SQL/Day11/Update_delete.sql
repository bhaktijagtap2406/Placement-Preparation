CREATE TABLE students(
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    city VARCHAR(50),
    marks INT
);

INSERT INTO students VALUES
(1,'Alice',20,'Pune',85),
(2,'Bob',21,'Mumbai',90),
(3,'Charlie',19,'Pune',72),
(4,'David',22,'Delhi',95),
(5,'Eva',20,'Mumbai',88);

SELECT * FROM students;

DELETE FROM students WHERE id=3;

DELETE FROM students WHERE city = 'Pune';

DELETE FROM students;

DROP TABLE students;

ALTER TABLE students
ADD email VARCHAR(100);

ALTER TABLE students
RENAME COLUMN marks TO score;

ALTER TABLE students
ALTER COLUMN name TYPE VARCHAR(100);

ALTER TABLE students
DROP COLUMN email;

ALTER TABLE students
RENAME TO student_details;

SELECT COUNT(*) FROM students;

SELECT COUNT(*) FROM students
WHERE city = 'Pune';

SELECT SUM(marks) FROM students;

SELECT AVG(marks) FROM students;

SELECT MIN(marks) FROM students;

SELECT MAX(marks) FROM students;

SELECT city, COUNT(*)
FROM students
GROUP BY city;

SELECT city, AVG(marks)
FROM students
GROUP BY city;

SELECT city, MAX(marks)
FROM students
GROUP BY city;

SELECT city, SUM(marks)
FROM students
GROUP BY city;

SELECT city, AVG(marks)
FROM students
GROUP BY city
HAVING AVG(marks) > 80;

SELECT city, COUNT(*)
FROM students
GROUP BY city
HAVING COUNT(*) > 1;

SELECT city, SUM(marks)
FROM students
GROUP BY city
HAVING SUM(marks) > 150;

SELECT city, COUNT(*)
FROM students
WHERE marks > 80
GROUP BY city
HAVING COUNT(*) >= 2;