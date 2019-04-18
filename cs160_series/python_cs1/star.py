import turtle
window = turtle.Screen()

star = turtle.Turtle()

def loop(x,y):
	star.clear()
	star.hideturtle()
	for i in range(1,6):
		star.rt(144)
		star.fd(200)
	star.showturtle()

star.shape("turtle")
star.color("orange")

star.speed("fast")

star.onclick(loop)


window.mainloop()
