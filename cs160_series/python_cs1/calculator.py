import math

def mode ():
        x = input('Please select a mode: (Programmer) = p or (Scientific) = s ?.... Press e/E to exit the calculator\n')

        if x.isalpha():
                if x == chr(80) or x == chr(112):
                        programmer()

                elif x == chr(83) or x == chr(115):
                        scientific()

                elif x == chr(69) or x == chr(101):
                        exit

                else:
                        print('Please enter a valid value\n')
                        mode()

        else:
                print('Please insert a valid value\n')
                mode()

#mode()		
def programmer():
	def getRemainder(num):#recursive function
		if (num == 0):
			return ''
	
		return getRemainder(num //2) + str(num%2) 
		
	b = input('Please enter a valid integer that is greater than 0.\n')
	
	try:
		b = int(b)
	
	except ValueError:
		print('Please enter a valid integer')
		programmer()
	
	if b < 0:
		prints('Oops! Please enter a valid integer that is greater than 0')
		programmer()
		
	else:
		print(getRemainder(b))
	
	option()	

def	option():
	yn = input('Do you want to stay in Programmer Mode? Y/N\n')
	
	if yn.isalpha:
		if yn == chr(89) or yn == chr(121):
			programmer()
		
		elif yn == chr(78) or yn == chr(110):
			mode()
			
		else:
			print('Please can you enter Y/N (y/n)?\n')
			option()
	
	else:
		print('Please enter Y/N (y/n)')
		option()

def scientific():
	def add(n1,n2):
		return n1 + n2
	def sub(n1,n2):
		return n1 - n2
	def mult(n1,n2):
		return n1 * n2
	def div(n1,n2):
		return n1 / n2
	def pow(n1,n2):
		return n1 ** n2
		
	n1 = input('please enter the first number: ')
	
	try:
		n1 = float(n1)
	except ValueError:
		print('Please only enter number, try again.')
		scientific()
	
	op = str(input('Please enter an operand: + - * / ^     '))
	try:
		op == chr(43) or op == chr(42) or op == chr(45) or op == chr(47) or op == chr(94)
	except ValueError:
		print('please enter the valid operands')
		scientific()

	
	n2 = input('please enter the second number: ')
	
	try:
		n2 = float(n2)
	except ValueError:
		print('Please only enter number, try again.')
		scientific()
	
	if op == chr(43):
		print (add(n1,n2))
		option_s()
	
	if op == chr(45):
		print (sub(n1,n2))
		option_s()
		
	if op == chr(42):
		print (mult(n1,n2))
		option_s()

	if op == chr(47):
		print (div(n1,n2))
		option_s()
		
	if op == chr(94):
		print (pow(n1,n2))
		option_s()


def	option_s():
	yns = input('Do you want to stay in scientific Mode? Y/N\n')
	
	if yns.isalpha:
		if yns == chr(89) or yns == chr(121):
			scientific()
		
		elif yns == chr(78) or yns == chr(110):
			mode()
			
		else:
			print('Please can you enter Y/N (y/n)?\n')
			option_s()
	
	else:
		print('Please enter Y/N (y/n)')
		option_s()
	

	
		
mode()
	
