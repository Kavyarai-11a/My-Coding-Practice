CREATE DATABASE Student;
USE Student;
CREATE TABLE StudentDB (
Student_Id INT,
Name VARCHAR(50),
Student_email VARCHAR(50),
Phone INT,
Address VARCHAR(100),
Course VARCHAR(50)
);
CREATE DATABASE BookStore;
Use BookStore;
CREATE TABLE PUBLISHER (
PublisherId INT,
PublisherName VARCHAR(50),
City VARCHAR(50)
);
CREATE TABLE BOOK (
BookId INT,
Title VARCHAR(50),
Price INT,
PublisherId VARCHAR(50)
);

CREATE DATABASE CompanyEmployee;
USE CompanyEmployee;
CREATE TABLE Employee (
Employee_Id INT,
First_Name VARCHAR(50),
Phone INT,
Salary INT,
Department VARCHAR(50)
);
SHOW DATABASES;
