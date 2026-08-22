# Write your MySQL query statement below
SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary
FROM Employee E
JOIN Department D ON E.departmentId=D.id
Where  3 > (select count(distinct (B.Salary))
            from  Employee B
            where B.Salary > E.Salary
            and E.DepartmentId = B.DepartmentId);