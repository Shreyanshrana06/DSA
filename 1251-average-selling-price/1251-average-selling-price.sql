# Write your MySQL query statement below
SELECT a.product_id,ifnull(ROUND(sum(b.units*a.price)/sum(b.units),2),0) AS average_price
FROM Prices a
LEFT JOIN UnitsSold b
ON a.product_id = b.product_id
AND b.purchase_date BETWEEN a.start_date AND a.end_date
GROUP BY a.product_id
