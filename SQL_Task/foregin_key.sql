CREATE DATABASE Company;
USE Company;
CREATE TABLE DEPARTMENT (
DeptID VARCHAR(50) PRIMARY KEY,
DeptName VARCHAR(50) DEFAULT "Employee"
);
CREATE TABLE EMPLOYEE (
EmpID VARCHAR(50) PRIMARY KEY,
EmpName VARCHAR(50) NOT NULL,
Email VARCHAR(50) UNIQUE,
Salary INT CHECK(Salary > 10000),
DeptID VARCHAR(50),
FOREIGN KEY (DeptID) REFERENCES DEPARTMENT (DeptID)
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

insert into EMPLOYEE (EmpID,EmpName,Email,Salary,DeptID)
values
(1,"A","A@",100000,1),
(2,"B","B@",100000,2);

insert into Project(ProjectID,ProjectName,Budget,DeptID,status)
values
(1,"A",100000,1,"progressing"),
(2,"B",100000,2,"stop");



