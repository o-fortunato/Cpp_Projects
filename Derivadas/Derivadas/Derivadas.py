import sympy as s
import math

x=s.symbols('x')
#Definir funcao
#usar prefixo s. para funcoes trigonometricas
f=1/s.cos(x)**2

#NAO MEXER || CORE
checkValidN=0
while (checkValidN==0):
    n=int(input("Numero de derivadas?(>=1): "))
    if(n>=1):
        checkValidN=1
        
k=1
while(k<=n):
    df=s.diff(f)
    print("Derivada de ordem",k,"= ",df)
    k=k+1
    f=df
