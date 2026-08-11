# Write your MySQL query statement below
SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary
FROM Employee E
JOIN Department D ON D.id=E.departmentId
WHERE(departmentId,Salary) IN
(
SELECT departmentId, MAX(Salary) FROM Employee
GROUP BY departmentId
)