import mysql.connector

connection = mysql.connector.connect(host='localhost',
                                     database='cims',
                                     user='root',
                                     password='root')
Table="""CREATE TABLE feesmaster
            (
            AdmissionNumber int(11) NOT NULL FOREIGN KEY REFERENCES studentmaster(AdmissionNumber),
            RollNumber int(4) NOT NULL PRIMARY KEY,
            StudentsName varchar(200) NOT NULL,
            AmountPayable int(10) NOT NULL,
            AmountPaid int(10) NOT NULL,
            1stQuater varchar(10) NOT NULL,
            2ndQuater varchar(10) NOT NULL,
            3rdQuater varchar(10) NOT NULL,
            4thQuater varchar(10) NOT NULL,
            FeeStatus varchar(10) NOT NULL
            );"""
cursor=connection.cursor()
result=cursor.execute(Table)
print("Fees Table Created Successfully")
