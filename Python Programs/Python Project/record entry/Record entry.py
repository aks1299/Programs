import mysql.connector

connection=mysql.connector.connect(host='localhost',
                         database='cims',
                         user='root',
                         password='root')
Values="""INSERT INTO studentmaster(AdmissionNumber,
StudentsName,
FathersName,
MothersName,
Class,
Section,
MobileNumber)
VALUES
(1,'Aman Kumar Singh','Om Prakash Singh','Sheela Singh',12,'A',62011039),
(2,'Avinash Sharma','Pradeep Sharma','Rinku Sharma',12,'A',75689023),
(3,'Abhishek Kumar Mahato','Aman Mahato','Akanshsa Mahato ',12,'A'45766789),
(4,'Aniket Mohanty','Chinmay Mohanty','Jayanti Mohanty',12,'A'45766789),
(5,'MD. Shakeb Sheikh','MD. Farooq Sheikh','Zubia Sheikh',12,'B'45766789),
(6,'Aakarsh Pattanaik','Aniket Pattanaik','Anjali Pattanaik',12,'C'45766789),
(7,'Abhilash Kumar Singh','Ashutosh Singh','Shristi Singh',12,'A'45766789),
(8,'Agnijeet Choudhary','Aditya Choudhary','Ananya Choudhary',12,'C'45766789),
(9,'Ankush Jha','Ashutosh Jha','Shristi Jha',12,'B'45766789),
(10,'Abhinav Kumar','Rakesh Kumar','Rashmi Kumari',12,''45766789),
(11,'Arun Pratap Singh','Aayush Singh','Aayushi Singh',12,''45766789),
(12,'Ayushman Ghosh','','',12,''45766789),
(13,'','','',12,''45766789),
(14,'','','',12,''45766789),
(15,'','','',12,''45766789),
(16,'','','',12,''45766789),
(17,'','','',12,''45766789),
(18,'','','',12,''45766789),
(19,'','','',12,''45766789),
(20,'','','',12,''45766789),
(21,'','','',12,''45766789),
(22,'','','',12,''45766789),
(23,'','','',12,''45766789),
(24,'','','',12,''45766789),
(25,'','','',12,''45766789),
(26,'','','',12,''45766789),
(27,'','','',12,''45766789),
(28,'','','',12,''45766789),
(29,'','','',12,''45766789),
(30,'','','',12,''45766789),
(31,'','','',12,''45766789),
(32,'','','',12,''45766789),
(33,'','','',12,''45766789),
(34,'','','',12,''45766789),
(35,'','','',12,''45766789),
(36,'','','',12,''45766789),
(37,'','','',12,''45766789),
(38,'','','',12,''45766789),
(39,'','','',12,''45766789),
(40,'','','',12,''45766789),
(41,'','','',12,''45766789),
(42,'','','',12,''45766789),
(43,'','','',12,''45766789),
(44,'','','',12,''45766789),
(45,'','','',12,''45766789),
(46,'','','',12,''45766789),
(47,'','','',12,''45766789),
(48,'','','',12,''45766789),
(49,'','','',12,''45766789),
(50,'','','',12,''45766789),
"""

cursor=connection.cursor()
cursor.execute(Values)
connection.commit()
print(cursor.rowcount,"Record Inserted successfully into student table")
cursor.close()
