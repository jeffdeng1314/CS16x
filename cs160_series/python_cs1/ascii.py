def a():
	print('    *    ')
	print('   * *   ')
	print('  *****  ')
	print(' *     * ')
	
def b():
	longB = '''
*****
*   **
*******
*   **
*****
	
	'''
	print(longB)
	
def c():
	longC = '''
****
*
*
****

	'''
	print(longC)
	
def e():
	longE = '''
*****
*
****
*
*****
	'''
	print(longE)
	
def t():
	longT = '''

*******
   *
   *
   *
   *
	
	'''
	print(longT)
	
def o():
	longO = '''
	
*****
*   *
*   *
*****

	'''
	print(longO)
	
	
def main():
	n = str(input('Please enter any 6 letters that you wish to print out: (a,b,c,e,t,o) Or Press q to quit\n'))
	
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
	
	main()


main()
