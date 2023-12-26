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
(3,'Abhishek Kumar Mahato','Aman Mahato','Akanshsa Mahato ',12,'A',45764399),
(4,'Aniket Mohanty','Chinmay Mohanty','Jayanti Mohanty',12,'A',4557889),
(5,'MD. Shakeb Sheikh','MD. Farooq Sheikh','Zubia Sheikh',12,'B',45797489),
(6,'Aakarsh Pattanaik','Aniket Pattanaik','Anjali Pattanaik',12,'C',45457789),
(7,'Abhilash Kumar Singh','Ashutosh Singh','Shristi Singh',12,'A',4347689),
(8,'Agnijeet Choudhary','Aditya Choudhary','Ananya Choudhary',12,'C',45763896),
(9,'Ankush Jha','Ashutosh Jha','Shristi Jha',12,'B',45389508),
(10,'Abhinav Kumar','Rakesh Kumar','Rashmi Kumari',12,'A',45234567),
(11,'Arun Pratap Singh','Aayush Singh','Aayushi Singh',12,'C',45766756),
(12,'Ayushman Ghosh','Abhinav Ghosh','Harshita Ghosh',12,'B',45764568),
(13,'Arpita Singh','Aman Singh','Samriddhi Singh',12,'B',45789201),
(14,'Harsh Gupta','Jayant Gupta','Shweta Gupta',12,'A',93348590),
(15,'Shweta Kumari','Sunil Kumar','Nisha Kumari',12,'C',45766734),
(16,'Shreyan Singh','Pratham Singh','Prity Singh',12,'B',45766345),
(17,'Rishish Chourasiya','Ravi Chourasiya','Pragya Chourasiya',12,'A',45768956),
(18,'Pragya Pandey','Ajay Prakash Pandey',' Seema Pandey',12,'B',4456846),
(19,'Rohit Kumar','Suraj Kumar','Shreya Kumari',12,'B',45748654),
(20,'Vishnu Singh','Mohit Singh','Bhoomi Singh',12,'A',78541236),
(21,'Shashank Das','Sourodeep Das','Debosmita Das',12,'A',62049004),
(22,'Tarun Mahato','Saurabh Mahato','Anisha Mahato',12,'B',4575068),
(23,'Pranav Kumar','Pranav Rishi','Suhani Kumari',12,'B',457664567),
(24,'Sanika Mulik','Jayanta Mulik','Vaishnavi Mulik',12,'B',4574367),
(25,'Nikhil Dev','Ayush Dev','Nisha Devi',12,'C',45746475),
(26,'Mohit Roy','Chandrashekhar Roy','Pushpa Roy',12,'B',45723547),
(27,'Sibtain Khan','Shaban Khan','Naina Khan',12,'A',5607833),
(28,'Prabhat Singh','Manoj Singh','Arpita Singh',12,'B',34954306),
(29,'Satyam Kumar','Shivam Kumar','Sony Kumari',12,'B',5820690),
(30,'Suhani Dey','Ajanta Dey','Smriti Dey',12,'B',5676859),
(31,'Sandeep Mahato','Lal Mohan Mahato','Anjali Mahato',12,'C',47894561),
(32,'Bhumika Tripathi','Munna Thripathi','Beena Tripathi',12,'A',54766789),
(33,'Ayush Dubey','Pratyush Dubey','Dipti Dubey',12,'B',98746789),
(34,'Kshitij Banerjee','Sushanto Banerjee','Mohika Banerjee',12,'A',32566789),
(35,'Sameer Anand','Aditya Anand','Sandeepa Anand',12,'A',65896789),
(36,'Aditya Kumar','Ram Kumar','Sita Kumari',12,'B',65846789),
(37,'Tejpratap Singh','Raj Kumar Singh','Sunidhi Singh',12,'B',12356789),
(38,'Aniket Ranjan','Abhinav Ranjan','Anjali Ranjan',12,'C',47895789),
(39,'Sanjit Mohaptra','Ravi Mohapatra','Sanjana Mohapatra',12,'C',91566789),
(40,'Ravi Kumar Singh ','Abhishek Singh','Pooja Singh',12,'B',45766789)
"""
cursor=connection.cursor()
cursor.execute(Values)
connection.commit()
print(cursor.rowcount,"Record Inserted successfully into student table")
cursor.close()
