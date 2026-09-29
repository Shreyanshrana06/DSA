# Write your MySQL query statement below
SELECT a.user_id, 
round(count(CASE WHEN b.action = 'confirmed' THEN 1 END)/COUNT(a.user_id),2) AS confirmation_rate
FROM Signups a
LEFT JOIN Confirmations b
ON a.user_id = b.user_id
group by a.user_id