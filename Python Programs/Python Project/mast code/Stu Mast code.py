import mysql.connector

connection = mysql.connector.connect(host='localhost',
                                     database='cims',
                                     user='root',
                                     password='root')
Table ="""CREATE TABLE studentmaster
                (
                AdmissionNumber int(11) NOT NULL PRIMARY KEY,
                StudentsName varchar(200)NOT NULL,
                FathersName varchar(200)NOT NULL,
                MothersName varchar(200)NOT NULL,
                Class int(5)NOT NULL,
                Section varchar(20)NOT NULL,
                MobileNumber int(10)NOT NULL
                );"""

cursor=connection.cursor()
result=cursor.execute(Table)
print("Table Created Successfully")
