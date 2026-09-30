# Write your MySQL query statement below
SELECT a.query_name, round(avg(a.rating/a.position),2) AS quality, 
round(avg(if(a.rating<3,1,0))*100,2) AS poor_query_percentage
FROM Queries a
group by a.query_name