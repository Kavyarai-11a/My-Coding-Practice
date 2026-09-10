CREATE DATABASE Company;
USE Company;
Drop database Company;
CREATE TABLE DEPARTMENT (
DeptID VARCHAR(50) PRIMARY KEY,
DeptName VARCHAR(50) DEFAULT "Employee"
);
CREATE TABLE EMPLOYEE (
EmpID VARCHAR(50) PRIMARY KEY,
EmpName VARCHAR(50) NOT NULL,
Email VARCHAR(50) UNIQUE,
Salary INT CHECK(Salary > 10000),
City varchar(50)
);
SHOW TABLES;
DESCRIBE DEPARTMENT;
DESCRIBE EMPLOYEE;
DROP TABLE DEPARTMENT;
DROP TABLE EMPLOYEE;
drop database Company;

create table Project (
ProjectID int primary key,
ProjectName varchar(50)not null,
Budget decimal(12,2) check(Budget > 0),
DeptID VARCHAR(50),
foreign key (DeptID) references Department (DeptID),
status varchar(20) default ("ongoing")
);

alter table Project add StartDate date;
alter table Project modify ProjectName varchar(150);

create table ProjectStaging (
ProjectId int,
Note varchar(50)
);

insert into ProjectStaging(ProjectID, Note)
values
(101,"A"),
(102,"B");

truncate table ProjectStaging;
describe ProjectStaging;

insert into Department(DeptID,DeptName)
values
(1,"a"),
(2,"b");

insert into EMPLOYEE (EmpID,EmpName,Email,Salary,City)
values
(1,"A","A@",100000,"Delhi"),
(2,"B","B@",200000,"Pune");

insert into Project(ProjectID,ProjectName,Budget,DeptID,status)
values
(1,"A",100000,1,"progressing"),
(2,"B",100000,2,"stop");

select * from EMPLOYEE where Salary > 100000;
select * from EMPLOYEE where Salary > 100000 and city = "Pune";
select * from EMPLOYEE where Salary > 100000 or city = "Pune";
select * from EMPLOYEE where Salary between 100000 and 300000;
select * from EMPLOYEE where City in ('Delhi','Pune');
select * from EMPLOYEE where City not in ('Delhi');
select * from EMPLOYEE where Salary > 150000;
select * from EMPLOYEE where Salary < 150000;
select * from EMPLOYEE where Salary != 100000;
select * from EMPLOYEE where Salary <> 100000;
select * from EMPLOYEE where Salary >= 100000;
select * from EMPLOYEE where Salary <= 200000;
select * from EMPLOYEE where Salary = 100000;
select * from EMPLOYEE order by Salary asc;
select * from EMPLOYEE order by Salary desc;
select * from EMPLOYEE where City like "de";




