import turtle #bring in the turtle library

window = turtle.Screen() #create a variable for the window

my_turtle = turtle.Turtle() #create a variable for your turtle
my_turtle.color('green')

def main():
	try:
		n =int(input('Please enter the number for the shape:\n1. Triangle \n2. Square \n3. Hexagon \n4. Octagon \nEnter any number to exit\n '))
		if n > 0 or n < 5:
				options(n)
	except ValueError:
		print('Invalid Choice, please enter a valid number')
		main()

def triangle():
	for i in range(1,4):
		m = 100
		my_turtle.forward(m)
		my_turtle.left(120)
	loop()

def square():
	for i in range(1,5):
		m = 100
		my_turtle.forward(m)
		my_turtle.left(90)
	loop()

def hexagon():
	for i in range(1,7):
		m = 100
		my_turtle.forward(m)
		my_turtle.left(60)
	loop()

def octagon():
	for i in range(1,9):
		m = 100
		my_turtle.forward(m)
		my_turtle.left(45)	
	loop()

def loop():
	try:
		c = int(input('Would you like to continue?\n1. yes\n2. no'))
		if c == 1:
			turtle.resetscreen()
			main()
		elif c == 2:
			exit
		else:
			print('enter a valid input please')
			loop()
	except ValueError:
		print('Please enter number only')
		loop()

def options(method):
                if method == 1:
                        triangle()
                elif method == 2:
                        square()
                elif method == 3:
                        hexagon()
                elif method == 4:
                        octagon()
                else:
                        print('Bye Dude~')
                        exit


main()

window.mainloop() #wait for the user to close the window

