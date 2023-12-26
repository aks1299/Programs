import mysql.connector

connection=mysql.connector.connect(host='localhost',
                         database='cims',
                         user='root',
                         password='root')
Values="""INSERT INTO marksmaster(AdmissionNumber,
RollNumber,
StudentsName,
Computer,
Physics,
Chemistry,
Maths,
English,
AverageMarks,
Percentage
)
VALUES
(6,1,'Aakarsh Pattanaik',66,78,69,88,70,74.2,74),
(7,2,'Abhilash Kumar Singh',72,56,78,69,70,69,69),
(10,3,'Abhinav Kumar',45,66,78,90,45,64.8,65),
(3,4,'Abhishek Kumar Mahato',89,64,55,56,78,68.4,68),
(36,5,'Aditya Kumar',50,63,48,56,78,59,59),
(8,6,'Agnijeet Choudhary',69,70,74,45,89,69.4,69),
(1,7,'Aman Kumar Singh',78,89,85,84,65,80.2,80),
(4,8,'Aniket Mohanty',89,56,75,95,41,71.2,71),
(38,9,'Aniket Ranjan',85,95,65,31,45,64.2,64),
(9,10,'Ankush Jha',45,45,49,65,53,51.4,51),
(13,11,'Arpita Singh',86,48,84,75,89,76.4,76),
(11,12,'Arun Pratap Singh',87,88,74,58,65,74.4,74),
(2,13,'Avinash Sharma',55,66,44,88,51,63,63),
(33,14,'Ayush Dubey',56,56,89,54,55,62,62),
(12,15,'Ayushman Ghosh',95,55,86,48,78,72.4,72),
(32,16,'Bhumika Tripathi',78,98,55,42,31,60.8,61),
(14,17,'Harsh Gupta',68,67,66,65,64,60,60),
(34,18,'Kshitij Banerjee',78,89,85,84,65,80.2,80),
(5,19,'MD. Shakeb Sheikh',77,88,45,56,52,63.6,64),
(26,20,'Mohit Roy',87,54,65,32,84,66.4,67),
(25,21,'Nikhil Dev',74,75,76,79,87,78.2,78),
(28,22,'Prabhat Singh',85,86,59,56,63,69.8,70),
(18,23,'Pragya Pandey',77,88,45,56,52,63.6,64),
(23,24,'Pranav Kumar',78,89,85,84,65,79.6,80),
(40,25,'Ravi Kumar Singh',85,86,59,56,63,69.8,70),
(17,26,'Rishish Chourasiya',78,89,85,84,65,80.2,80),
(19,27,'Rohit Kumar',68,67,66,65,64,66,66),
(35,28,'Sameer Anand',78,89,85,84,65,80.2,80),
(31,29,'Sandeep Mahato',78,89,85,84,65,64.4,64),
(24,30,'Sanika Mulik',87,54,65,32,84,80,80),
(39,31,'Sanjit Mohaptra',78,89,85,84,64,81,81),
(29,32,'Satyam Kumar',78,89,85,84,69,81,81),
(21,33,'Shashank Das',89,56,75,95,41,71.2,71),
(16,34,'Shreyan Singh',87,54,65,32,84,64.4,64),
(15,35,'Shweta Kumari',89,56,75,95,41,71.2,71),
(27,36,'Sibtain Khan',78,89,85,84,65,80.2,80),
(30,37,'Suhani Dey',74,55,65,65,68,65.4,65),
(22,38,'Tarun Mahato',48,52,45,56,55,51.2,51),
(37,39,'Tejpratap Singh',56,89,98,75,57,75,75),
(20,40,'Vishnu Singh',48,84,75,57,65,65.8,66)
"""
cursor=connection.cursor()
cursor.execute(Values)
connection.commit()
print(cursor.rowcount,"Record Inserted successfully into marks table")
cursor.close()
