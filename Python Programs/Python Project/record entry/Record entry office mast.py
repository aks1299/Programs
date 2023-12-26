import mysql.connector

connection=mysql.connector.connect(host='localhost',
                         database='cims',
                         user='root',
                         password='root')
Values="""INSERT INTO officemaster(IDNumber,
OfficeIDNumber,
OfficeStaffName,
UIDnumber,
MobileNumber
)
VALUES
(3,1,'Dashrath Singh',456667,9645679),
(4,2,'Ishita Ghosh',4568456,9654679),
(5,3,'Farroq Hassan',4568789,96584459),
(6,4,'Pankaj Singh',4568890,9655678),
(7,5,'Abhay Das',4568345,9645909)
"""
cursor=connection.cursor()
cursor.execute(Values)
connection.commit()
print(cursor.rowcount,"Record Inserted successfully into office table")
cursor.close()
