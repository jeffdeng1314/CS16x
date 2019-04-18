import turtle

window = turtle.Screen()

turt = turtle.Turtle()
turt.color("orange")
turt.shape("turtle")
turt.speed("fast")
turt.pu()
turt.setposition(-330,0)
turt.pd()

def next():
	turt.pu()
	turt.sety(0)
	turt.seth(0)
	turt.fd(38)
	turt.pd()

def a():
	turt.lt(75)
	turt.fd(50)
	turt.rt(140)
	turt.fd(52)
	turt.pu()
	turt.rt(180)
	turt.fd(20)
	turt.pd()
	turt.lt(65)
	turt.fd(20)
	turt.pu()
	turt.sety(0)
	turt.seth(0)
	turt.fd(50)
	turt.pd()
def b():
	turt.circle(10,180)
	turt.rt(180)
	turt.circle(10,180)
	turt.lt(90)
	turt.fd(40)
	next()

def c():
	turt.circle(20,-180)
	turt.pu()
	turt.sety(0)
	turt.seth(0)
	turt.fd(25)
	turt.pd()

def e():
	for i in range(1,3):
		turt.fd(25)
		turt.bk(25)
		turt.lt(90)
		turt.fd(20)
		turt.rt(90)
	turt.fd(25)	
	turt.pu()
	turt.sety(0)
	turt.seth(0)
	turt.fd(30)
	turt.pd()

def t():
	'''turt.pu()
	turt.fd(20)
	turt.pd()
	'''
	turt.lt(90)
	turt.fd(40)
	turt.lt(90)
	turt.fd(15)
	turt.bk(30)
	turt.pu()	
	turt.sety(0)
	turt.seth(0)
	turt.fd(20)
	turt.pd()
def o():
	turt.circle(15,-360)
	turt.pu()
	turt.sety(0)
	turt.seth(0)
	turt.fd(45)
	turt.pd()


	
def main():
	n1 = ''
	n1 = str(input('Please enter any 6 letters that you wish to print out: (a,b,c,e,t,o) Or Press q to quit\n'))
		
	main2(n1)
def main2(n):
	turt.clear()
	turt.pu()
	turt.setposition(-330,0)
	turt.pd()
	if n == "q" or n == "Q":
		exit()
	
	for i in n[0:]:
		if i not in ['a','b','c','e','t','o','A','B','C','E','T','O']:
			print('baddsd')
			n = ""
			main()
			break
				
	for i in n[0:]:	
		if i == "a" or i == "A":#"a" "A"
			a()
		elif i == chr(66) or i == chr(98):
			b()
		elif i == chr(67) or i == chr(99):
			c()
		elif i == chr(69) or i == chr(101):
			e()
		elif i == chr(84) or i == chr(116):
			t()
		elif i == chr(79) or i == chr(111):
			o()
	
	turt.pu()
	turt.home()
	turt.pd()
	main()

main()

window.mainloop()
