import mysql.connector

connection=mysql.connector.connect(host='localhost',
                         database='cims',
                         user='root',
                         password='root')
Values="""INSERT INTO teachermaster(IDNumber,
TeacherIDNumber,
TeacherName,
UIDnumber,
SubjectsTaught,
ClassesTaught,
MobileNumber
)
VALUES
(1,1,'Aakansha Sinha',4564455,'Physics',12,96587909),
(2,2,'Anindita Roy',4565567,'English',12,96534509),
(8,3,'Rajesh Kumar',4568321,'Computer',12,96567509),
(9,4,'Sharad Kumar',4568543,'Maths',12,9658959),
(10,5,'Sharda Suman',4568445,'Chemistry',12,96535356)
"""

cursor=connection.cursor()
cursor.execute(Values)
connection.commit()
print(cursor.rowcount,"Record Inserted successfully into teacher table")
cursor.close()
