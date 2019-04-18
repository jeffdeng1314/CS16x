x = input("Give me a positive number that is less than 256\n")
try:
	x = int()


if x > 256 or x <0:
        print('error')

else:
    
        while (x > 0):
                print(int(x%2))
                x=x//2

except ValueError:
        print('bad input')
