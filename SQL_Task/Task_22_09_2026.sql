CREATE DATABASE university;
USE university;

CREATE TABLE department (
    dept_name VARCHAR(20),
    building VARCHAR(15),
    budget DECIMAL(12, 2),
    PRIMARY KEY (dept_name)
);

CREATE TABLE classroom (
    building VARCHAR(15),
    room_number VARCHAR(7),
    capacity INT,
    PRIMARY KEY (building, room_number)
);

CREATE TABLE time_slot (
    time_slot_id VARCHAR(4),
    day VARCHAR(10),
    start_hr INT,
    start_min INT,
    end_hr INT,
    end_min INT,
    PRIMARY KEY (time_slot_id, day, start_hr, start_min)
);

CREATE TABLE course (
    course_id VARCHAR(8),
    title VARCHAR(50),
    dept_name VARCHAR(20),
    credits INT,
    PRIMARY KEY (course_id),
    FOREIGN KEY (dept_name) REFERENCES department(dept_name)
);

CREATE TABLE instructor (
    ID VARCHAR(5),
    name VARCHAR(20) NOT NULL,
    dept_name VARCHAR(20),
    salary DECIMAL(8, 2),
    PRIMARY KEY (ID),
    FOREIGN KEY (dept_name) REFERENCES department(dept_name)
);

CREATE TABLE student (
    ID VARCHAR(5),
    name VARCHAR(20) NOT NULL,
    dept_name VARCHAR(20),
    tot_cred INT DEFAULT 0,
    PRIMARY KEY (ID),
    FOREIGN KEY (dept_name) REFERENCES department(dept_name)
);

CREATE TABLE section (
    course_id VARCHAR(8),
    sec_id VARCHAR(8),
    semester VARCHAR(6),
    year INT,
    building VARCHAR(15),
    room_number VARCHAR(7),
    time_slot_id VARCHAR(4),
    PRIMARY KEY (course_id, sec_id, semester, year),
    FOREIGN KEY (course_id) REFERENCES course(course_id),
    FOREIGN KEY (building, room_number) REFERENCES classroom(building, room_number)
);


CREATE TABLE teaches (
    ID VARCHAR(5),
    course_id VARCHAR(8),
    sec_id VARCHAR(8),
    semester VARCHAR(6),
    year INT,
    PRIMARY KEY (ID, course_id, sec_id, semester, year),
    FOREIGN KEY (course_id, sec_id, semester, year) REFERENCES section(course_id, sec_id, semester, year),
    FOREIGN KEY (ID) REFERENCES instructor(ID)
);

CREATE TABLE takes (
    ID VARCHAR(5),
    course_id VARCHAR(8),
    sec_id VARCHAR(8),
    semester VARCHAR(6),
    year INT,
    grade VARCHAR(2),
    PRIMARY KEY (ID, course_id, sec_id, semester, year),
    FOREIGN KEY (course_id, sec_id, semester, year) REFERENCES section(course_id, sec_id, semester, year),
    FOREIGN KEY (ID) REFERENCES student(ID)
);

CREATE TABLE advisor (
    s_ID VARCHAR(5),
    i_ID VARCHAR(5),
    PRIMARY KEY (s_ID),
    FOREIGN KEY (i_ID) REFERENCES instructor(ID),
    FOREIGN KEY (s_ID) REFERENCES student(ID)
);

CREATE TABLE prereq (
    course_id VARCHAR(8),
    prereq_id VARCHAR(8),
    PRIMARY KEY (course_id, prereq_id),
    FOREIGN KEY (course_id) REFERENCES course(course_id),
    FOREIGN KEY (prereq_id) REFERENCES course(course_id)
);

INSERT INTO department (dept_name, building, budget) VALUES
('Biology',    'Watson',  90000.00),
('Comp. Sci.', 'Taylor', 100000.00),
('Elec. Eng.', 'Taylor',  85000.00),
('Finance',    'Painter',120000.00),
('History',    'Painter', 50000.00),
('Math',       'Taylor',  60000.00),
('Music',      'Packard', 80000.00),
('Physics',    'Watson',  70000.00);

INSERT INTO classroom (building, room_number, capacity) VALUES
('Packard', '101',  500),
('Painter', '514',   10),
('Taylor',  '0087',  75),
('Taylor',  '3128',  70),
('Taylor',  '259',   45),
('Watson',  '100',   30),
('Watson',  '120',   50),
('Watson',  '258',   40);

INSERT INTO time_slot (time_slot_id, day, start_hr, start_min, end_hr, end_min) VALUES
('A','Monday',   8, 0, 8,50),
('A','Wednesday',8, 0, 8,50),
('A','Friday',   8, 0, 8,50),
('B','Monday',   9, 0, 9,50),
('B','Wednesday',9, 0, 9,50),
('B','Friday',   9, 0, 9,50),
('C','Monday',   11,0, 11,50),
('C','Wednesday',11,0, 11,50),
('C','Friday',   11,0, 11,50),
('D','Monday',   13,0, 13,50),
('D','Wednesday',13,0, 13,50),
('E','Tuesday',  10,30,11,45),
('E','Thursday', 10,30,11,45),
('F','Tuesday',  14,30,15,45),
('F','Thursday', 14,30,15,45),
('G','Monday',   16,0, 17,15),
('G','Wednesday',16,0, 17,15);

INSERT INTO course (course_id, title, dept_name, credits) VALUES
('BIO-101', 'Intro to Biology',          'Biology',    4),
('BIO-301', 'Genetics',                  'Biology',    4),
('CS-101',  'Intro to Computer Science', 'Comp. Sci.', 4),
('CS-190',  'Game Design',               'Comp. Sci.', 4),
('CS-315',  'Robotics',                  'Comp. Sci.', 3),
('CS-319',  'Image Processing',          'Comp. Sci.', 3),
('CS-347',  'Database System Concepts',  'Comp. Sci.', 3),
('EE-181',  'Intro to Digital Systems',  'Elec. Eng.', 3),
('FIN-201', 'Investment Banking',        'Finance',    3),
('HIS-351', 'World History',             'History',    3),
('MATH-101','Calculus I',                'Math',       4),
('MU-199',  'Music Video Production',    'Music',      3),
('PHY-101', 'Physical Principles',       'Physics',    4);

INSERT INTO instructor (ID, name, dept_name, salary) VALUES
('10101', 'Srinivasan', 'Comp. Sci.', 65000.00),
('11111', 'Newton',     'Math',       85000.00),
('12121', 'Wu',         'Finance',    90000.00),
('15151', 'Mozart',     'Music',      40000.00),
('22222', 'Einstein',   'Physics',    95000.00),
('32343', 'El Said',    'History',    60000.00),
('33456', 'Gold',       'Physics',    87000.00),
('45565', 'Katz',       'Comp. Sci.', 75000.00),
('58583', 'Califieri',  'History',    62000.00),
('76543', 'Singh',      'Finance',    80000.00),
('76766', 'Crick',      'Biology',    72000.00),
('83821', 'Brandt',     'Comp. Sci.', 92000.00),
('98345', 'Kim',        'Elec. Eng.', 80000.00);

INSERT INTO student (ID, name, dept_name, tot_cred) VALUES
('1001', 'Aditi Sharma',   'Comp. Sci.', 54),
('1002', 'Rohan Mehta',    'Comp. Sci.', 42),
('1003', 'Priya Nair',     'Biology',    88),
('1004', 'Karan Verma',    'Physics',    30),
('1005', 'Sneha Iyer',     'Finance',    66),
('1006', 'Arjun Rao',      'History',    24),
('1007', 'Divya Pillai',   'Music',      12),
('1008', 'Vikram Singh',   'Elec. Eng.', 48),
('1009', 'Neha Gupta',     'Comp. Sci.', 96),
('1010', 'Aakash Joshi',   'Math',       36),
('1011', 'Meera Krishnan', 'Biology',    60),
('1012', 'Sanjay Kapoor',  'Comp. Sci.', 18),
('1013', 'Isha Reddy',     'Physics',    72),
('1014', 'Farhan Ahmed',   'Finance',     6),
('1015', 'Tanvi Desai',    'History',    84);

INSERT INTO section (course_id, sec_id, semester, year, building, room_number, time_slot_id) VALUES
('BIO-101', '1', 'Fall',   2025, 'Watson', '120',  'C'),
('BIO-301', '1', 'Fall',   2025, 'Watson', '100',  'F'),
('CS-101',  '1', 'Fall',   2025, 'Packard','101',  'A'),
('CS-101',  '1', 'Spring', 2026, 'Packard','101',  'A'),
('CS-190',  '1', 'Spring', 2026, 'Taylor', '0087', 'C'),
('CS-315',  '1', 'Spring', 2026, 'Watson', '100',  'B'),
('CS-319',  '1', 'Spring', 2026, 'Watson', '100',  'E'),
('CS-347',  '1', 'Fall',   2025, 'Taylor', '3128', 'A'),
('CS-347',  '2', 'Spring', 2026, 'Taylor', '3128', 'G'),
('EE-181',  '1', 'Spring', 2026, 'Taylor', '3128', 'C'),
('FIN-201', '1', 'Spring', 2026, 'Packard','101',  'B'),
('HIS-351', '1', 'Spring', 2026, 'Painter','514',  'B'),
('MATH-101','1', 'Fall',   2025, 'Taylor', '0087', 'D'),
('MU-199',  '1', 'Spring', 2026, 'Packard','101',  'D'),
('PHY-101', '1', 'Fall',   2025, 'Watson', '100',  'B');

INSERT INTO teaches (ID, course_id, sec_id, semester, year) VALUES
('76766', 'BIO-101', '1', 'Fall',   2025),
('76766', 'BIO-301', '1', 'Fall',   2025),
('10101', 'CS-101',  '1', 'Fall',   2025),
('10101', 'CS-101',  '1', 'Spring', 2026),
('45565', 'CS-190',  '1', 'Spring', 2026),
('83821', 'CS-315',  '1', 'Spring', 2026),
('45565', 'CS-319',  '1', 'Spring', 2026),
('83821', 'CS-347',  '1', 'Fall',   2025),
('10101', 'CS-347',  '2', 'Spring', 2026),
('98345', 'EE-181',  '1', 'Spring', 2026),
('12121', 'FIN-201', '1', 'Spring', 2026),
('32343', 'HIS-351', '1', 'Spring', 2026),
('11111', 'MATH-101','1', 'Fall',   2025),
('15151', 'MU-199',  '1', 'Spring', 2026),
('22222', 'PHY-101', '1', 'Fall',   2025);

INSERT INTO takes (ID, course_id, sec_id, semester, year, grade) VALUES
('1001', 'CS-101',  '1', 'Fall',   2025, 'A'),
('1001', 'CS-347',  '1', 'Fall',   2025, 'B+'),
('1002', 'CS-101',  '1', 'Fall',   2025, 'B'),
('1002', 'CS-190',  '1', 'Spring', 2026, 'A-'),
('1003', 'BIO-101', '1', 'Fall',   2025, 'A'),
('1003', 'BIO-301', '1', 'Fall',   2025, 'A-'),
('1004', 'PHY-101', '1', 'Fall',   2025, 'B+'),
('1005', 'FIN-201', '1', 'Spring', 2026, 'A'),
('1006', 'HIS-351', '1', 'Spring', 2026, 'B'),
('1007', 'MU-199',  '1', 'Spring', 2026, 'A'),
('1008', 'EE-181',  '1', 'Spring', 2026, 'B-'),
('1009', 'CS-101',  '1', 'Fall',   2025, 'A'),
('1009', 'CS-315',  '1', 'Spring', 2026, 'A'),
('1009', 'CS-347',  '2', 'Spring', 2026, 'A-'),
('1010', 'MATH-101','1', 'Fall',   2025, 'B'),
('1011', 'BIO-101', '1', 'Fall',   2025, 'B+'),
('1012', 'CS-101',  '1', 'Spring', 2026, NULL),
('1013', 'PHY-101', '1', 'Fall',   2025, 'A'),
('1014', 'FIN-201', '1', 'Spring', 2026, 'C'),
('1015', 'HIS-351', '1', 'Spring', 2026, 'A-');

INSERT INTO advisor (s_ID, i_ID) VALUES
('1001', '10101'),
('1002', '10101'),
('1003', '76766'),
('1004', '22222'),
('1005', '12121'),
('1006', '32343'),
('1007', '15151'),
('1008', '98345'),
('1009', '45565'),
('1010', '11111'),
('1011', '76766'),
('1012', '83821'),
('1013', '33456'),
('1014', '76543'),
('1015', '58583');

INSERT INTO prereq (course_id, prereq_id) VALUES
('BIO-301', 'BIO-101'),
('CS-190',  'CS-101'),
('CS-315',  'CS-101'),
('CS-319',  'CS-101'),
('CS-347',  'CS-101'),
('CS-347',  'MATH-101');


SELECT 
    ID AS Student_ID, 
    name AS Student_Name, 
    dept_name AS Department, 
    tot_cred AS Credits 
FROM 
    student 
WHERE 
    tot_cred > 40 
    AND tot_cred < 90 
    AND dept_name IN ('Comp. Sci.', 'Biology', 'Physics') 
    AND name LIKE '%a%' 
ORDER BY 
    tot_cred DESC;


SELECT 
    name AS Instructor_Name, 
    dept_name AS Department, 
    salary AS Salary
FROM 
    instructor
WHERE 
    salary BETWEEN 70000 AND 95000
    AND dept_name <> 'History'
    AND name LIKE '%n%'
ORDER BY 
    salary DESC;


SELECT 
    course_id AS Course_Code, 
    title AS Course_Title, 
    credits AS Credits
FROM 
    course
WHERE 
    course_id LIKE 'CS%'
    AND credits IN (3, 4)
    AND title NOT LIKE '%Intro%'
ORDER BY 
    credits DESC, 
    title ASC;


SELECT DISTINCT 
    dept_name
FROM 
    instructor
WHERE 
    salary > 80000
ORDER BY 
    dept_name ASC;


SELECT 
    ID, 
    name, 
    dept_name, 
    tot_cred
FROM 
    student
WHERE 
    (name LIKE 'A%' OR name LIKE 'D%' OR name LIKE 'M%' OR name LIKE 'S%')
    AND tot_cred > 20
    AND dept_name NOT IN ('Finance', 'History')
ORDER BY 
    name ASC;


SELECT 
    course_id, 
    title, 
    dept_name, 
    credits
FROM 
    course
WHERE 
    credits = 3
    AND dept_name IN ('Comp. Sci.', 'Finance', 'History', 'Music')
    AND title NOT LIKE '%Intro%'
ORDER BY 
    dept_name ASC, 
    title ASC;


SELECT 
    name AS Instructor_Name, 
    dept_name AS Department, 
    salary AS Salary
FROM 
    instructor
WHERE 
    salary > 75000
    AND dept_name IN ('Comp. Sci.', 'Finance', 'Physics', 'Math')
    AND name LIKE '%i%'
ORDER BY 
    dept_name ASC, 
    salary DESC;


SELECT 
    building, 
    room_number, 
    capacity
FROM 
    classroom
WHERE 
    capacity > 40
    AND building <> 'Painter'
    AND (room_number LIKE '0%' OR room_number LIKE '1%')
ORDER BY 
    capacity DESC;


SELECT 
    ID AS Student_ID, 
    name AS Student_Name, 
    dept_name AS Department, 
    tot_cred AS Total_Credits
FROM 
    student
WHERE 
    tot_cred > 50
    AND dept_name IN ('Comp. Sci.', 'Biology', 'Physics', 'Finance')
    AND name LIKE '%a%'
    AND name NOT LIKE 'S%'
ORDER BY 
    Total_Credits DESC, 
    Student_Name ASC;


SELECT
    course_id AS Course_Code, 
    title AS Course_Name, 
    dept_name AS Department_Name, 
    credits AS Credit_Hours
FROM 
    course
WHERE 
    (course_id LIKE 'C%' OR course_id LIKE 'M%')
    AND credits > 2
    AND title LIKE '%i%'
    AND dept_name <> 'Biology'
    AND course_id <> 'CS-190'
ORDER BY 
    Department_Name ASC, 
    Credit_Hours DESC, 
    Course_Name ASC;