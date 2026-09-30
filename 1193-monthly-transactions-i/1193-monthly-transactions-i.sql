# Write your MySQL query statement below
SELECT DATE_FORMAT(a.trans_date,'%Y-%m') AS month,
a.country,COUNT(a.state) AS trans_count,
COUNT(CASE WHEN a.state ='approved' THEN 1 END) AS approved_count,
SUM(amount) as trans_total_amount,
SUM(CASE WHEN state = 'approved' THEN amount ELSE 0 END) as approved_total_amount 
FROM Transactions a
group by DATE_fORMAT(a.trans_date,'%Y-%m') ,a.country
