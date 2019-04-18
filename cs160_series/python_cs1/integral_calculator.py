import math

def f1(x):
	return 5 * math.pow(x, 4) + 3 * math.pow(x, 3) - 10 * x + 2

def f2(x):
	return math.pow(x, 2) - 10
	
def f3(x):
	return 40 * x + 5

def f4(x):
	return math.pow(x, 3)
	
def f5(x):
	return 20 * math.pow(x, 2) + 10 * x - 2

"""
	ft: function type
	mt: method type: 1 - rectangle, 2 - trapezoid, 3 - both
	n: number of trapezoids
	a: starting point
	b: ending point
"""
def calculateArea(ft, mt, n, a, b):
	w = (b-a) / n

	if mt == 1 or mt == 3:
		# Using rectangle
		cauclateAreaUsingRectangle(ft, w, n, a, b)
	if mt == 2 or mt == 3:
		# Using trapezoids
		cauclateAreaUsingTrapezoid(ft, w, n, a, b)

def cauclateAreaUsingRectangle(ft, w, n, a, b):
	area = 0
	
	if ft == 1:
		# Use f1(x)
		for i in range(0, n):
			area += w * f1(a + i * w)
		print("[Rectangle] The area under 5x^4 + 3x^3 - 10x + 2 between " + str(a) + " and " + str(b) + " is " + str(area))
	elif ft == 2:
		# Use f2(x)
		for i in range(0, n):
			area += w * f2(a + i * w)
		print("[Rectangle] The area under x^2  10 between " + str(a) + " and " + str(b) + " is " + str(area))
	elif ft == 3:
		# Use f3(x)
		for i in range(0, n):
			area += w * f3(a + i * w)
		print("[Rectangle] The area under 40x + 5 between " + str(a) + " and " + str(b) + " is " + str(area))
	elif ft == 4:
		# Use f4(x)
		for i in range(0, n):
			area += w * f4(a + i * w)
		print("[Rectangle] The area under x^3 between " + str(a) + " and " + str(b) + " is " + str(area))
	elif ft == 5:
		# Use f5(x)
		for i in range(0, n):
			area += w * f5(a + i * w)
		print("[Rectangle] The area under 20x^2 + 10x - 2 between " + str(a) + " and " + str(b) + " is " + str(area))
	
def cauclateAreaUsingTrapezoid(ft, w, n, a, b):
	area = 0
	
	if ft == 1:
		# Use f1(x)
		for i in range(0, n):
			area += w * (f1(a + i * w) + f1(a + (i + 1) * w)) / 2
		print("[Trapezoid] The area under 5x^4 + 3x^3 - 10x + 2 between " + str(a) + " and " + str(b) + " is " + str(area))
	elif ft == 2:
		# Use f2(x)
		for i in range(0, n):
			area += w * (f2(a + i * w) + f2(a + (i + 1) * w)) / 2
		print("[Trapezoid] The area under x^2  10 between " + str(a) + " and " + str(b) + " is " + str(area))
	elif ft == 3:
		# Use f3(x)
		for i in range(0, n):
			area += w * (f3(a + i * w) + f3(a + (i + 1) * w)) / 2
		print("[Trapezoid] The area under 40x + 5 between " + str(a) + " and " + str(b) + " is " + str(area))
	elif ft == 4:
		# Use f4(x)
		for i in range(0, n):
			area += w * (f4(a + i * w) + f4(a + (i + 1) * w)) / 2
		print("[Trapezoid] The area under x^3 between " + str(a) + " and " + str(b) + " is " + str(area))
	elif ft == 5:
		# Use f5(x)
		for i in range(0, n):
			area += w * (f5(a + i * w) + f5(a + (i + 1) * w)) / 2
		print("[Trapezoid] The area under 20x^2 + 10x - 2 between " + str(a) + " and " + str(b) + " is " + str(area))
	
def main():
	while True:
		functionType = int(input("\nChoose a function(1, 2, 3, 4, 5, other(quit)):"))
		if functionType < 1 or functionType > 5:
			break
		
		methodType = int(input("Would you like to calculate the area using the rectangle, trapezoid, or both (1, 2, 3):"))
		
		n = int(input("How many trapezoids do you want?"))
		a = int(input("Please select a starting point, a = "))
		b = int(input("Please select an ending point, b = "))
		
		calculateArea(functionType, methodType, n, a, b)
	
main()
