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
(1,1,'Aakansha Sinha',62011039,'Physics',12,56787656),
(2,2,'Anindita Roy',62022034,'English',12,56783456),
(3,3,'Rajesh Kumar',62033045,'Computer',12,56785667),
(4,4,'Sharad Kumar',62044056,'Maths',12,56781234),
(5,5,'Sharda Suman',62055067,'Chemistry',12,56780987)
"""

cursor=connection.cursor()
cursor.execute(Values)
connection.commit()
print(cursor.rowcount,"Record Inserted successfully into student table")
cursor.close()

