SELECT s.student_id, s.name, c.course
FROM Students s
LEFT JOIN Courses c
ON s.student_id = c.student_id;

SELECT s.name, c.course
FROM Students s
LEFT JOIN Courses c
ON s.student_id = c.student_id
WHERE c.course = 'Python';

SELECT s.name, c.course
FROM Students s
LEFT JOIN Courses c
ON s.student_id = c.student_id
AND c.course = 'Python';