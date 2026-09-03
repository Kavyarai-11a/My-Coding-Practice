CREATE DATABASE college;
USE college;
CREATE TABLE student (
	rollno INT PRIMARY KEY,
    name VARCHAR(50),
    marks INT NOT NULL,
    grade VARCHAR(1),
    city VARCHAR(20)
);
INSERT INTO student (rollno, name, marks, grade, city)
VALUES
(101, "Anil", 78, "C", "Pune"),
(102, "Bhumika", 93, "A", "Mumbai"),
(103, "Chetan", 85, "B", "Mumbai"),
(104, "Dhruv", 96, "A", "Delhi"),
(105, "Emanuel", 12, "F", "Delhi"),
(106, "farah", 82, "B", "Delhi");
select * from student;
SELECT AVG(marks) FROM student;
DROP DATABASE college;
update student set city = "Gurugram" where rollno = 101;
update student set marks = 95 where rollno = 102;
create table tempData (
ID int primary key,
Note varchar(50)
);
insert into tempData values(1 , "A"),(2,"B");
select * from tempData;
delete from tempData where ID = 1;
insert into tempData values(3, "C"),(4,"D"),(5,"E"),(6,"F");
delete from tempData where ID = 5;
select rollno,name,marks from student;



 
