create database LibraryDB;
use LibraryDB;
create table Publisher (
PublisherID int primary key,
PublisherName varchar(60) not null unique,
city varchar(100)
);
create table Book (
BookID int primary key,
Title varchar(150) not null,
Price decimal(10,2) check(Price > 0),
PublisherID int,
foreign key (PublisherID) references Publisher (PublisherID)
);
ALTER TABLE Book Add PublisherYear INT;
ALTER TABLE Book Add ISBN VARCHAR(20) unique;
ALTER TABLE Book modify Title VARCHAR(200) not null;
ALTER TABLE Book drop column PublisherYear;

