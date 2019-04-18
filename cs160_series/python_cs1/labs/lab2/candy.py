candy = 0
gum = 0

x = int(input("How many coupons you have? Bro? Or madam?\n"))
while x >= 10:
	x = x - 10
	candy += 1
	if x < 10:
		break

while x < 10:
	x = x - 3
	gum += 1
	if x <= 2:
		break

print ("The amount of candies you can get is " + str(candy) + " and the amount of gumballs you can get is " + str(gum) )
