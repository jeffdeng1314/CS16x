import turtle #bring in the turtle library

window = turtle.Screen() #create a variable for the window

my_turtle = turtle.Turtle() #create a variable for your turtle
my_turtle.color('green')

n = 100
for i in range(1,5):
	my_turtle.forward(n)
	my_turtle.left(90)
'''my_turtle.forward(n)
my_turtle.left(90)
my_turtle.forward(n)
my_turtle.left(90)
my_turtle.forward(n)
my_turtle.left(90)
my_turtle.forward(n)
my_turtle.left(90)
'''


window.mainloop() #wait for the user to close the window
