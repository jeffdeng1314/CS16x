x = int (input("Enter a decimal number between 0-255\n"));

if x > 256 or x < 0:
        print('Please enter a value between 0 - 255')

else:
	if x - 128 >= 0:
		print ('1')
		x = x - 128
	else:
		print ('0')
	
		
	if x - 64 >= 0:
		print ('1')
		x = x - 64
	else:
		print ('0')
	
	if x - 32 >= 0:
		print ('1')
		x = x - 32
	else:
		print('0')
		
	if x - 16 >= 0:
		print('1')
		x = x - 16
	else:
		print('0')
		
	if x - 8 >= 0:
		print('1')
		x = x - 8
	else:
		print('0')
		
	if x - 4 >= 0:
		print('1')
		x = x - 4
	else:
		print('0')
		
	if x - 2 >= 0:
		print('1')
		x = x - 2
	else:
		print('0')
		
	if x - 1 >= 0:
		print('1')
		x = x - 1
	else:
		print('0')
	
