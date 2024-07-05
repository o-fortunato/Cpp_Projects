num = float(input("Numero a converter: "))
bInit = int(input("Base do numero: "))
bFinal= int(input("Converter para que base?: "))

def get_digit(number, n):
    return number // 10**n % 10

def baseConverter(num, bInit, bFinal):
    k=0
    coef=[]
    if(bInit!=10):
        num_conv=0
        i=len(str(num))
        while(i>=0):
            num_conv=num_conv + (get_digit(num,i)*(bInit**i))
            i=i-1
        num=num_conv
        
            
    while(num>bFinal):
        resto=int(num//bFinal)
        c=int(num-resto*bFinal)
        coef.insert(0,c)
        num=int((num-c)/bFinal)
        k=k+1
    coef.insert(0,num)
    print(coef)
        
baseConverter(num, bInit, bFinal)