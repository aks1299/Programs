import mysql.connector

connection = mysql.connector.connect(host='localhost',
                                     database='cims',
                                     user='root',
                                     password='root')
Table="""CREATE TABLE officemaster
            (
            IDNumber int(11) NOT NULL FOREIGN KEY REFERENCES staffmaster(IDNumber),
            OfficeIDNumber int(10) NOT NULL PRIMARY KEY,
            OfficeStaffName varchar(200) NOT NULL,
            UIDnumber int(10) NOT NULL,
            MobileNumber int(10) NOT NULL
            );"""
cursor=connection.cursor()
result=cursor.execute(Table)
print("Staff Table Created Successfully")
