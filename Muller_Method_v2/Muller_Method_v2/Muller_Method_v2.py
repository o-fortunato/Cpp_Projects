# Import libraries

import math as m;

# Define f(x)

def f(x):
    # Copy function of problem
    return 4*x**3+8*x-5;

# CORE FUNCTION
# DO NOT CHANGE
def muller(x0, x1, x2):
    k = 2
    #Usar k caso queira mais iteracoes
    fx0 = f(x0);
    fx1 = f(x1);
    fx2 = f(x2);
    f12 = (fx2-fx1)/(x2-x1);
    f02 = (fx2-fx0)/(x2-x0);
    f01 = (fx1-fx0)/(x1-x0);
    
    f012 = (f12-f01)/(x2-x0);
    w = f12+f02-f01;
    
    if(w < 0):
        print("x3 = ", x2-((2*fx2)/(w-m.sqrt(w**2-4*f012*fx2))));
    if(w > 0):
        print("x3 = ", x2-((2*fx2)/(w+m.sqrt(w**2-4*f012*fx2))));
        
#Inputs
x0 = float(input("x0 = "));
x1 = float(input("x1 = "));
x2 = float(input("x2 = "));
muller(x0, x1, x2);
