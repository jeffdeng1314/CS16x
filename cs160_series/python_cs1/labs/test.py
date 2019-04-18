def getRemainder(num):
	if (num == 0):
		return ''
	
	return getRemainder(num //2) + str(num%2) 

x = input("Give me a positive number that is less than 256\n")

try:
	x = int(x)
except ValueError:
	print('bad input')
	
if x < 0 or x >= 256:
	print("Oops! The integer has to be greater or equal to 0 but less than 256.")
else:
	print(getRemainder(x))
