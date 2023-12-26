import mysql.connector

connection = mysql.connector.connect(host='localhost',
                                     database='cims',
                                     user='root',
                                     password='root')
Table="""CREATE TABLE marksmaster
            (
            AdmissionNumber int(11) NOT NULL FOREIGN KEY REFERENCES studentmaster(AdmissionNumber),
            RollNumber int(4) NOT NULL PRIMARY KEY,
            StudentsName varchar(200) NOT NULL,
            Computer int(10) NOT NULL,
            Physics int(10) NOT NULL,
            Chemistry int(10) NOT NULL,
            Maths int(10) NOT NULL,
            English int(10) NOT NULL,
            AverageMarks int(10) NOT NULL,
            AveragePercentage int(10) NOT NULL
            );"""
cursor=connection.cursor()
result=cursor.execute(Table)
print("Marks Table Created Successfully")
