# what is SQL ?

 1. SQL stands for structured query language 
 2. SQL is used to create a database | table structured
 3. SQL case insenstive language 

 ```
  INSERT or insert or Insert 
 ```   
 4. SQL is fast to load or create a structured of database and tables
 5. SQL is open source to used 


# How to start SQL ?

  1. install database ...

     1. mySQL 
     2. sqlite 
     3. Oracle
     4. mongoDB
     5. sql server 

# install xampp server 
  **this is a server tools to run MySQL**

  X => cross plateform support (all OS)
  A => apache 
  M => mySQL 
  P =>perl
  P => PHP

# https://www.apachefriends.org/download_success.html

# open a xampp
# open any broswers 
# start xampp server 
# localhost/phpmyadmin


# types of SQL commands or query 
# sql query or commands help of this we create an database and tables structures 

  1. DDL (data definition language)
  2. DML (data manipulation language)
  3. DQL (data query language)
  4. TCL (transactional control language)

# what is DDL .........

  1. DDL stands for data definition language 
  2. DDL used to create database | create table | alter data | drop database | drop tables | rename table | change table colunname 
  3. list of query in DDL .....

  ``` 
  1.create 
  2.alter
  3.drop 
  4.truncate 
  5.rename 
  6.change 

  ```     


# how to create a database 
  **syntax**

  ```
  create database databasename;
  or
  create database meesho_app
  or 
  create database amazon_app
  ```

**note**

```
database name can not created with space
database name should be any case 
database name can not start with numbers 

```

# how to create table inside of database  

# what is table

  1. table contain column and rows 
  2. table can hold or able to create 1032 columns in one table
  3. table create and stored structured type of data 

# create a table of employee with 5 columns and 5 rows 

| Employee ID | Employee Name | Department | Salary | City |
|-------------|---------------|------------|--------|------|
| 101 | Amit Sharma | HR | 35000 | Ahmedabad |
| 102 | Neha Patel | IT | 50000 | Rajkot |
| 103 | Rahul Verma | Finance | 45000 | Surat |
| 104 | Priya Singh | Marketing | 40000 | Vadodara |
| 105 | manav Mehta | Sales | 38000 | Mumbai |
| 106 | ygendra Mehta | Sales | 38000 | Mumbai |
| 107 | Belim | Sales | 38000 | Mumbai |


# chart of create tables and its datatype and size


  columnname       datatype                size 

  id               int                     default-size(11)
  name             char, varchar(0-255)
  pasword          char, varchar(0-255)
  address          text                    default-size(more than 65365)       
  date             date
  date-time        datetime
  salary           float
  multiple choice  enum                    enumerated datatype(multiple choice) 
  comment          text
  mobile           int, bigInt             int(11), bigint(20)



# create table SQL query ....

  **syntax** 

  ```
  create table tablename
  (
  columnname(id) datatype(size) auto_increment primary key,
  columnname (name) datatype(size),
  .
  .
  .
  .
  .  

  )
  or

create table employee
(
empid int AUTO_INCREMENT primary key,
employeename varchar(255),
password varchar(255),
age int,
phone bigint,
address text    
);


create table contact
(
id int AUTO_INCREMENT primary key,
name varchar(255),
email varchar(255),
number bigint,
subject ENUM('24x7 support','customer care support'),
message  text    

)

  ```

# alter : alter is used to add | modify | change column name in table 

  **alter**

  1. add new column in table 

   ```
   alter table employee add country varchar(255)

   ``` 
  2. add new column in table after any columnname 

   ```
   alter table employee add photo varchar(255) after empid

   ```

   3. How to update any columnname 

    ```
     alter table employee change employeename  name varchar(255);
    ```

    4. How to remove any columnname 

        ```
        alter table employee drop age;
        ```

# rename : rename is usd to rename your table name 

    5. How to rename a table 

       ```
       rename table employee to tbl_employee;
       or
       rename table contact to tbl_contact;
  
       ```    

# drop : drop is used to delete a database 
# drop is also used to delete a table 
 
  **drop is used to delete structures and data both**

 1. how to drop database 
    
    ```
    drop database database name
    or
    drop database meesho_app;

    ```

  2. drop table only 

      ```
      drop table tablename 
      or 
      drop table tbl_employee;  

      ```


# truncate : truncate is used to empty all tables data 

  **truncate examples**

   ```
   truncate table tbl_contact;  
   
   ```

   **after truncate we can not rollback data**


# DML : dml stands for data manipluation   language 

  **DML used to insert | delete | update data**

  1. insert 
  2. delete 
  3. update 

# insert a data in tables 

  **insert a data**

  1. single data insert 
   
     **syntax**
     ```
      insert into tablename(columnname1,columnname2) values('value1','value2')
      or
      insert into tbl_employee(photo,name,password,phone,address,country) VALUES('brijesh.jpg','brijesh','brij1651',9121212121,'150 feet ring road rajkot','india')

     ```
  2. multiple data insert    

     ```
      insert into tbl_employee(photo,name,password,phone,address,country) VALUES('manav.jpg','manav','manav1651',91212148,'150 feet ring road rajkot','india'),('ygendra.jpg','yogendra','yog651',6536548598,'150 feet ring road rajkot','india')
     ```

     ```
     insert into tbl_employee VALUES('null','belim.jpg','belim','belim1651',91212148,'150 feet ring road rajkot','india'),('null','kumar.jpg','kumar','kumar51',6853548598,'150 feet ring road rajkot','india')

     ```


# delete a data from tables      
  
  **delete data**

  1. delete all data from tables 
  2. delete particular 1 rows from table 
  3. delete alternate data from table 
  4. delete a range of data from tables 


  ``` 
  all data delete 

  1. delete from tbl_employee;

  delete particular one data 

  2. delete from tbl_employee where empid=2

  delete alternate data from table 

  3. delete from tbl_employee where empid in(1,4);

  delete range of data from table ...

  4. delete from tbl_employee where empid between 1 and 5;

  ```

# update  a data from tables      
  
  **update a  data**

  **syntax**

  ```
  update tablename set columname='values' where id=1;
  or 
  update tbl_contact set name='manav', email='manav007@gmail.com',number=92545123,subject='24x7 custmer support', message='give me customer care numbers' where id=1;
  or
  update tbl_employee set photo='brijesh.jpg', name='nrijesh',password='b123456',phone=91212121,address='150 feet ring road rajkot',country='india' where empid=7;
  ```


# DQL : stands for data query language

   1. data query language is used to select data 
   2. data query language is used to fetch data 
   3. DQL is used to select all data from tables 
   4. select 

   ```
   1. select all data from tables 
      examples : select * from tablename;
                 select * from tbl_employee; 

   2. select particular column name of data from tables 
      examples : select columnname1, columnname2... from tablename;
                 select empid,photo,name,password from tbl_employee;
   
   3. select particular one rows of data using its id 
      examples :select * from tbl_employee where empid=6;

   4. select particular one rows of data using its name 
      examples :select * from tbl_employee where name='brijesh';
                select empid,name,photo from tbl_employee where name='brijesh';

   5.select alternate data or rows from tables 

     examples : select * from tbl_employee where empid in (6,9,11)

   6.select range of data from tables 

     examples : select * from tbl_employee where empid between 7 and 11      

   7. select range of data using limit

    examples : select * from tbl_employee where empid limit 2,4 

   8. select data or filter data of employee with name in ascending order 

     **order by**
     select * from tbl_employee  order by name asc;
     select * from tbl_employee  order by name desc;
     select * from tbl_employee  order by name;

   9. select or search data from like operator 

      **note**

      search data from keyword ...

      1. search a name start with 'a' letter    
        examples : select * from tbl_employee where name like 'b%'

   ```
  