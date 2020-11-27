import math 
def lcm(num): 
	ans = 1
	for i in range(1, num + 1): 
		ans = int((ans * i)/math.gcd(ans, i))		 
	return ans  
num =int(input("enter the value:"))
print (lcm(num))
