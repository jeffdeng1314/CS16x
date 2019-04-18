import math

def sphere():
	r = float(input("Please insert values for radius in feet for the sphere"))
	water = 62.4
	w = float(input("Enter the value for weight in pounds for the sphere"))
	v = (4/3)*math.pi*(r**3)
	f =v * water

	if f >= w:
		print ("This sphere will float\n" + "The buoyancy of the sphere is " + str(f))
		loop()

	else:
		print ("This sphere will sink " + "\n The buoyancy is " + str(f) )
		loop()
		

def loop ():
	yn = input("Would you like to input different values? ( y or Y for Yes, n or N for No)")
	
	if yn.isalpha():
		if yn == chr(89) or yn == chr(121):
			sphere()
		
		elif yn == chr(110) or yn == chr(78):
			print("Bye boiiii")
			exit
		
		else:
			print("Fine.... GG You don't know what my instructions")
	
	else:
		print("bad boi")
		exit
sphere()
