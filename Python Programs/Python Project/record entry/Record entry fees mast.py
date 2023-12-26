import mysql.connector

connection=mysql.connector.connect(host='localhost',
                         database='cims',
                         user='root',
                         password='root')
Values="""INSERT INTO feesmaster(AdmissionNumber,
RollNumber,
StudentsName,
AmountPayable,
AmountPaid,
1stQuater,
2ndQuater,
3rdQuater,
4thQuater,
FeeStatus
)
VALUES
(6,1,'Aakarsh Pattanaik',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(7,2,'Abhilash Kumar Singh',8260,8260,'Yes','Yes','Yes','No','No'),
(10,3,'Abhinav Kumar',8260,8260,'Yes','Yes','No','No','No'),
(3,4,'Abhishek Kumar Mahato',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(36,5,'Aditya Kumar',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(8,6,'Agnijeet Choudhary',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(1,7,'Aman Kumar Singh',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(4,8,'Aniket Mohanty',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(38,9,'Aniket Ranjan',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(9,10,'Ankush Jha',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(13,11,'Arpita Singh',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(11,12,'Arun Pratap Singh',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(2,13,'Avinash Sharma',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(33,14,'Ayush Dubey',8260,8260,'Yes','Yes','Yes','No','No'),
(12,15,'Ayushman Ghosh',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(32,16,'Bhumika Tripathi',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(14,17,'Harsh Gupta',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(34,18,'Kshitij Banerjee',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(5,19,'MD. Shakeb Sheikh',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(26,20,'Mohit Roy',8260,8260,'Yes','Yes','Yes','No','No'),
(25,21,'Nikhil Dev',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(28,22,'Prabhat Singh',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(18,23,'Pragya Pandey',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(23,24,'Pranav Kumar',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(40,25,'Ravi Kumar Singh',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(17,26,'Rishish Chourasiya',8260,8260,'Yes','No','Yes','Yes','No'),
(19,27,'Rohit Kumar',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(35,28,'Sameer Anand',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(31,29,'Sandeep Mahato',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(24,30,'Sanika Mulik',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(39,31,'Sanjit Mohaptra',8260,8260,'Yes','Yes','No','Yes','No'),
(29,32,'Satyam Kumar',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(21,33,'Shashank Das',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(16,34,'Shreyan Singh',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(15,35,'Shweta Kumari',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(27,36,'Sibtain Khan',8260,8260,'Yes','Yes','Yes','No','No'),
(30,37,'Suhani Dey',8260,8260,'Yes','Yes','Yes','Yes','Cleared'),
(22,38,'Tarun Mahato',8260,8260,'Yes','Yes','Yes','No','No'),
(37,39,'Tejpratap Singh',8260,8260,'Yes','Yes','Yes','No','Cleared'),
(20,40,'Vishnu Singh',8260,8260,'Yes','Yes','Yes','Yes','Cleared')
"""
cursor=connection.cursor()
cursor.execute(Values)
connection.commit()
print(cursor.rowcount,"Record Inserted successfully into fees table")
cursor.close()

