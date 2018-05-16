# import sqlite3

# connection=sqlite3.connect('python_bvc')

# connection.close()

import sqlite3

connection=sqlite3.connect('python_bvc')

# connection.execute('''CREATE TABLE Batch2(Id int PRIMARY KEY,FirstName text not null,LastName text not null,address varchar2(50))''')

# connection.execute(''' INSERT INTO Batch2(Id,Firstname,Lastname,Address) values(553,'srihari','sunkaranam','amalapuram')''')

connection.execute('''UPDATE Batch2 Set Id=2 Where Id=551''')

connection.commit()
a=connection.execute('''SELECT * FROM Batch2''')
c=["Id","Firstname","Lastname","Address"]
count=1
for i in a:
	b=list(i)
	print("    Detail-",count)
	print("-----------------------")
	for j in range(4):
		print("This ",c[j]," is",b[j])
	count+=1
	print("---------------------- ")
connection.close()

