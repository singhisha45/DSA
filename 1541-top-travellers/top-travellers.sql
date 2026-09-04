# Write your MySQL query statement below
SELECT DISTINCT U.name AS name, IFNULL(
        SUM(R.distance) OVER (PARTITION BY u.id),
        0
    ) AS travelled_distance
FROM Users U
LEFT JOIN Rides R ON U.id=R.user_id
ORDER BY travelled_distance DESC ,U.name ASC;