import mysql.connector

connection=mysql.connector.connect(host='localhost',
                         database='cims',
                         user='root',
                         password='root')
Values="""INSERT INTO staffmaster(IDNumber,
StaffName,
UIDnumber,
Qualification,
MobileNumber
)
VALUES
(1,'Aakansha Sinha',4564455,'BSc. Physics',96587909),
(2,'Anindita Roy',4565567,'MA. English',96534509),
(3,'Dashrath Singh',456667,'Bcom.',9645679),
(4,'Ishita Ghosh',4568456,'Bcom.',9654679),
(5,'Farroq Hassan',4568789,'Bcom.',96584459),
(6,'Pankaj Singh',4568890,'Mcom.',9655678),
(7,'Abhay Das',4568345,'Bcom.',9645909),
(8,'Rajesh Kumar',4568321,'MCA Computer',96567509),
(9,'Sharad Kumar',4568543,'Msc. Maths',9658959),
(10,'Sharda Suman',4568445,'BSc. Chemistry',96535356)
"""

cursor=connection.cursor()
cursor.execute(Values)
connection.commit()
print(cursor.rowcount,"Record Inserted successfully into staff table")
cursor.close()
