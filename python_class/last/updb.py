import gen as g

import sqlite3

conn=sqlite3.connect('passwd')

c=conn.cursor()

def Generator(ai):
	
	s=verify(ai)

	if s:
		
		c=g.chargen(4)+g.intgen(4)+g.chargen(2)+g.intgen(4)+g.chargen(2)
	
		conn.execute('''INSERT INTO passwd(username,passwd) values('{}','{}')'''.format(ai,c))

		print("User successfully registered")

		print("Generated Password is ",c)
	
	else:
		
		y=verifypass(ai)

		if y:
			print("Thanks")
		else:
			print("Wrong Password")


def verify(ai):
	
	c.execute('''SELECT * FROM passwd''')
	
	x=c.fetchall()

	for row in x:

		if ai in row:
		
			return False		
	
	return True

def verifypass(ai):
	
	r=input('Enter your password:')
	
	c.execute('''SELECT passwd FROM passwd WHERE username="{}"'''.format(ai))
	
	x=c.fetchall()
	
	for i in x:
		
		if r in i:
			
			return True
	
	return False

user=input('Enter username:')

passwd=Generator(user)

conn.commit()

conn.close()