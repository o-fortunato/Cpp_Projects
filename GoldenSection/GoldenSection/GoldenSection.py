#Obtemos as funcoes matematicas
import math as m

def funcao(x):
    return x*(29/10)+(21*m.log(1-x*(17/100)))/2

goldenRatio = (m.sqrt(5)-1)/2

#Definir intervalos
a = float(input("a0 = "))
b = float(input("b0 = "))

path = int(input("Max (escreve 1) ou Min (escreve 0)?: "))

iteracoes = int(input("Numero de Iteracoes: "))
i=0

while(i<iteracoes):
    c = b-goldenRatio*(b-a)
    d = a+goldenRatio*(b-a)
    if(path==1):
        if(funcao(c)<funcao(d)):
            a=c
        if(funcao(c)>funcao(d)):
            b=d
    elif(path==0):
        if(funcao(c)>funcao(d)):
            a=c
        if(funcao(c)<funcao(d)):
            b=d
    else:
        print("Erro: Unexpected path")
        break
    i=i+1
print("I(", i-1,")= [ ",a," , ",b," ]")




