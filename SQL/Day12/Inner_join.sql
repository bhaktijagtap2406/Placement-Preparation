CREATE TABLE Students (
    student_id INT PRIMARY KEY,
    name VARCHAR(50)
);

CREATE TABLE Courses (
    student_id INT,
    course VARCHAR(50)
);

INSERT INTO Students VALUES
(1, 'Bhakti'),
(2, 'Alice'),
(3, 'Bob');

INSERT INTO Courses VALUES
(1, 'DBMS'),
(2, 'Python'),
(4, 'Java');

SELECT *
FROM Students
INNER JOIN Courses
ON Students.student_id = Courses.student_id;

SELECT Students.name, Courses.course
FROM Students
INNER JOIN Courses
ON Students.student_id = Courses.student_id;

SELECT s.name, c.course
FROM Students s
INNER JOIN Courses c
ON s.student_id = c.student_id;

SELECT s.student_id,s.name, c.course
FROM Students s
INNER JOIN Courses c
ON s.student_id = c.student_id;

SELECT s.name, c.course
FROM Students s
INNER JOIN Courses c; --cartesian product