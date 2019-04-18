def get_user_input():
	string_one = str(input('Please enter your first string'))
	string_two = str(input('Please enter your second string'))
	
	try:
		if string_one.isalpha and string_two.isalpha:
			num_matching_chars(string_one,string_two)
		
	except ValueError:
		print('Please try again')
		get_user_input()
	

def num_matching_chars(x,y):
	if len(x) <= len(y):
		percent_matching(len(y),xPercent_matching(x,y))
	elif len(y) <= len(x):
		percent_matching(len(x),xPercent_matching(y,x))
	else:
		print('no')
		return ''
	
def xPercent_matching(x,y):
	to_return = 0
	for i in range(len(x)):
		if x[i] == y[i]:
			to_return = to_return + 1
			
	return to_return
	
def percent_matching(x,y):
	print("%s percent of mataching" %((y/x)*100))
			


get_user_input()
		
