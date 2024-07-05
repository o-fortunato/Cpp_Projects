# Python3 Program to find root of
# a function, f(x)
import math;
#Use math.log for ln
#Use math.exp(x) for e
#Use for math.log10() for log
#Use for math.sin() for cos
#Use for math.cos() for cos
#Use for math.tan() for tan
#Use for math.sqrt() for sqrt

MAX_ITERATIONS = int(input("Iterations: "));

# Function to calculate f(x)
def f(x):

	
	return 4*x**3+8*x-5;

def Muller(a, b, c):

	res = 0;
	i = 0;

	while (True):
	
		# Calculating various constants 
		# required to calculate x3
		f1 = f(a); f2 = f(b); f3 = f(c);
		d1 = f1 - f3; 
		d2 = f2 - f3;
		h1 = a - c; 
		h2 = b - c;
		a0 = f3;
		a1 = (((d2 * pow(h1, 2)) -
			(d1 * pow(h2, 2))) /
			((h1 * h2) * (h1 - h2)));
		a2 = (((d1 * h2) - (d2 * h1)) /
			((h1 * h2) * (h1 - h2)));
		x = ((-2 * a0) / (a1 +
			abs(math.sqrt(a1 * a1 - 4 * a0 * a2))));
		y = ((-2 * a0) / (a1 -
			abs(math.sqrt(a1 * a1 - 4 * a0 * a2))));

		# Taking the root which is 
		# closer to x2
		if (x >= y):
			res = x + c;
		else:
			res = y + c;

		# checking for resemblance of x3 
		# with x2 till two decimal places
		m = res * 100;
		n = c * 100;
		m = math.floor(m);
		n = math.floor(n);
		if (m == n):
			break;
		a = b;
		b = c;
		c = res;
		if (i > MAX_ITERATIONS):
			print("Root cannot be found using", 
							"Muller's method");
			break;
		i += 1;
	if (i <= MAX_ITERATIONS):
		print("The value of the root is",
						res);

# Driver Code
a = float(input("x0 = "));
b = float(input("x1 = "));
c = float(input("x2 = "));
Muller(a, b, c);
	
# This code is contributed by mits

