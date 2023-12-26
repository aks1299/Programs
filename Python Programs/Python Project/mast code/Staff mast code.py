import mysql.connector

connection = mysql.connector.connect(host='localhost',
                                     database='cims',
                                     user='root',
                                     password='root')
Table="""CREATE TABLE teachermaster
            (
            IDNumber int(11) NOT NULL,
            TeacherIDNumber int(10) NOT NULL PRIMARY KEY,
            TeacherName varchar(200) NOT NULL,
            UIDnumber int(10) NOT NULL,
            SubjectsTaught varchar(10) NOT NULL,
            ClassesTaught varchar(10) NOT NULL,
            MobileNumber int(10) NOT NULL
            );"""
cursor=connection.cursor()
result=cursor.execute(Table)
print("Staff Table Created Successfully")
