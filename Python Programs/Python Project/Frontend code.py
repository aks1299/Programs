c=input("Enter Password")
pwd="Jsk4ever"
if(c==pwd):
    print("Enter '1' for Principal")
    print("Enter '2' for Teacher")
    print("Enter '3' for Office Staff")
    print("Enter '4' for Student")
    choice=input("Who is Accessing the Database:")
    if(choice=='1'):
        print("You have viewing access to all data in the database")
        print("Enter '1' for student database.")
        print("Enter '2' for student marks database.")
        print("Enter '3' for student fees database.")
        print("Enter '4' for staff database.")
        print("Enter '5' for teacher database.")
        print("Enter '6' for office database.")
        choice1=input("Which database do you want to access:")
        if(choice1=='1'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from studentmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in studentmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                    print("Admission no.= ",row[0])
                    print("Student Name= ",row[1])
                    print("Fathers Name = ",row[2])
                    print("Mothers Name= ",row[3])
                    print("Class= ",row[4])
                    print("Section= ",row[5])
                    print("Mobile No.= ",row[6])
        elif(choice1=='2'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from marksmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in marksmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Roll no.= ",row[1])
                print("Student Name= ",row[2])
                print("Computer = ",row[3])
                print("Physics= ",row[4])
                print("Chemistry= ",row[5])
                print("Maths= ",row[6])
                print("English= ",row[7])
                print("Average Marks= ",row[8])
                print("Percentage= ",row[9])
        elif(choice1=='3'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from feesmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in feesmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Roll no.= ",row[1])
                print("Student Name= ",row[2])
                print("Amount Payable = ",row[3])
                print("Amount Paid= ",row[4])
                print("1st Quater= ",row[5])
                print("2nd Quater= ",row[6])
                print("3rd Quater= ",row[7])
                print("4th Quater= ",row[8])
                print("Fee status= ",row[9])
        elif(choice1=='4'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                         database='cims',
                                         user='root',
                                         password='root')
            query="select * from staffmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in staffmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("ID no.= ",row[0])
                print("Staff Name= ",row[1])
                print("UID No. = ",row[2])
                print("Qualification= ",row[3])
                print("Mobile No.= ",row[4])
        elif(choice1=='5'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                         database='cims',
                                         user='root',
                                         password='root')
            query="select * from teachermaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in teachermaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("ID no.= ",row[0])
                print("Teachers ID No.= ",row[1])
                print("Teachers Name = ",row[2])
                print("UID No.= ",row[3])
                print("Subjects Taught= ",row[4])
                print("Classes Taught= ",row[5])
                print("Mobile No.= ",row[6])
        elif(choice1=='6'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                         database='cims',
                                         user='root',
                                         password='root')
            query="select * from officemaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in officemaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("ID no.= ",row[0])
                print("Office staff Name= ",row[1])
                print("UID No. = ",row[2])
                print("Mobile No.= ",row[3])
        else:
            print("Please enter a valid choice")
    elif(choice=='2'):
        print("You have viewing access to student and marks data in the database")
        print("Enter '1' for student database.")
        print("Enter '2' for student marks database.")
        choice1=input("Which database do you want to access:")
        if(choice1=='1'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from studentmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in studentmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Student Name= ",row[1])
                print("Fathers Name = ",row[2])
                print("Mothers Name= ",row[3])
                print("Class= ",row[4])
                print("Section= ",row[5])
                print("Mobile No.= ",row[6])
        elif(choice1=='2'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from marksmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in marksmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Roll no.= ",row[1])
                print("Student Name= ",row[2])
                print("Computer = ",row[3])
                print("Physics= ",row[4])
                print("Chemistry= ",row[5])
                print("Maths= ",row[6])
                print("English= ",row[7])
                print("Average Marks= ",row[8])
                print("Percentage= ",row[9])
        else:
            print("Please enter a valid choice")
        
        
    elif(choice=='3'):
        print("You have viewing access to student and fees data in the database")
        print("Enter '1' for student database.")
        print("Enter '2' for student fees database.")
        choice1=input("Which database do you want to access:")
        if(choice1=='1'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from studentmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in studentmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Student Name= ",row[1])
                print("Fathers Name = ",row[2])
                print("Mothers Name= ",row[3])
                print("Class= ",row[4])
                print("Section= ",row[5])
                print("Mobile No.= ",row[6])
        elif(choice1=='2'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from feesmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in feesmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Roll no.= ",row[1])
                print("Student Name= ",row[2])
                print("Amount Payable = ",row[3])
                print("Amount Paid= ",row[4])
                print("1st Quater= ",row[5])
                print("2nd Quater= ",row[6])
                print("3rd Quater= ",row[7])
                print("4th Quater= ",row[8])
                print("Fee status= ",row[9])
        else:
            print("Please enter a valid choice")
        
        
    elif(choice=='4'):
        print("You have viewing access to student, fees and marks data in the database")
        print("Enter '1' for student database.")
        print("Enter '2' for student marks database.")
        print("Enter '3' for student fees database.")
        choice1=input("Who is Accessing the Database:")
        if(choice1=='1'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from studentmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in studentmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Student Name= ",row[1])
                print("Fathers Name = ",row[2])
                print("Mothers Name= ",row[3])
                print("Class= ",row[4])
                print("Section= ",row[5])
                print("Mobile No.= ",row[6])
        elif(choice1=='2'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from marksmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in marksmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Roll no.= ",row[1])
                print("Student Name= ",row[2])
                print("Computer = ",row[3])
                print("Physics= ",row[4])
                print("Chemistry= ",row[5])
                print("Maths= ",row[6])
                print("English= ",row[7])
                print("Average Marks= ",row[8])
                print("Percentage= ",row[9])
        elif(choice1=='3'):
            import mysql.connector

            connection = mysql.connector.connect(host='localhost',
                                             database='cims',
                                             user='root',
                                             password='root')
            query="select * from feesmaster"
            cursor=connection.cursor()
            cursor.execute(query)
            records=cursor.fetchall()
            print("Total number of rows in feesmaster is: ",cursor.rowcount)
            print("Printing each record:")
            for row in records:
                print("Admission no.= ",row[0])
                print("Roll no.= ",row[1])
                print("Student Name= ",row[2])
                print("Amount Payable = ",row[3])
                print("Amount Paid= ",row[4])
                print("1st Quater= ",row[5])
                print("2nd Quater= ",row[6])
                print("3rd Quater= ",row[7])
                print("4th Quater= ",row[8])
                print("Fee status= ",row[9])
    else:
        print("Please enter a valid choice")

                            
