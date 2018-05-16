import sqlite3

dbname=input('Enter a Database name:')

conn=sqlite3.connect('{}'.format(dbname))

conn.execute('''CREATE TABLE '{}' (UserName varchar(30) PRIMARY KEY,Passwd varchar(30))'''.format(dbname))

conn.close()