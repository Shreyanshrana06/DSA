# Write your MySQL query statement below
SELECT b.contest_id,round(count(b.contest_id)*100/(select count(*) from Users),2) AS percentage
FROM Users a
 JOIN Register b
ON a.user_id=b.user_id
group by b.contest_id
order by percentage DESC,contest_id ASC