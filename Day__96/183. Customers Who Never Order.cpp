# Write your MySQL query statement below
select name AS Customers
from Customers
where ID NOT IN (select customerId from Orders)