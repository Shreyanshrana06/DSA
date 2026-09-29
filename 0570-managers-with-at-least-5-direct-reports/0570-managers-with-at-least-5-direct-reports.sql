# Write your MySQL query statement below
SELECT a.name
FROM Employee a
JOIN Employee b
ON a.id=b.managerId 
group by b.managerId
having COUNT(b.managerId)>=5
