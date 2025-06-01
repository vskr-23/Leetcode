CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    declare result int;
    select distinct salary into result 
    from Employee e1 
    where N-1=(select count(distinct salary)
                 from Employee e2 
                 where e2.salary>e1.salary)
                limit 1;
    return result;
END