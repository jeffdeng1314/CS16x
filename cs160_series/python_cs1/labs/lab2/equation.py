x = int (input ("How many bits do we want?"));
unsigned = 2**int(x)-1;
min_signed = -(2**(int(x)-1));
max_signed = 2**(int(x)-1)-1;
print("We have from 0 to  " + str(unsigned) + " for the unsigned");
print ("The range for the signed bits are ranged from " + str(min_signed) + " to " + str(max_signed) ); 
