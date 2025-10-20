#EX1L3C
i=0
while True:
    print(i)
    if i == 20:
        break
    i+=1

#EX2L3C
i=1
while i<=20:
    if i % 2 == 0:
        print(i)
    i+=1

#EX3L3C
i=0
while i<=20:
    if i % 2 == 0:
        print(f"o número {i} é par")
    else:
        print(f"o número {i} é impar")
    i+=1 

#EX4L3C
for i in range (20,0,-1):
    print(i)

#EX5L3C
for i in range (1,21,2):
    print(i)

#EX6L3C
for i in range (21,1,-1):
    if i % 2 == 0:
        print(f"o número {i} é par")
    else:
        print(f"o número {i} é impar")

#EX7L3C - Há do...while???
i=0
while True:
    print(i)
    if i == 20:
        break
    i+=1

#EX8L3C
i=0
while True:
    if i % 2 == 0:
        print(i)
    if i == 20:
        break
    i+=1

#EX9L3C
i=0
while True:
    if i % 2 == 0:
        print(f"o número {i} é par")
        if i==20:
            break
    else:
        print(f"o número {i} é impar")
    i+=1

#EX10L3C
from time import sleep
#EX10L3C
def switch(Oper,num):
    match(Oper):
        case '+':
            print("resultado:",num[0]+num[1])
        case '-':
            print("resultado:",num[0]-num[1])
        case '/':
            if num[1] == 0:
                print("Nao pode haver divisao por 0!")
                sleep(1)
                return 0
            print("resultado:",num[0]/num[1])
        case '*':
            print("resultado:",num[0]*num[1])
        case _:
            print("Não é uma operacao!")
            return 0

while True:
    Oper = input("Digite a operacao que deseja realizar: ")
    if Oper.upper() == 'S':
        break
    while True:
        try:
            num = input("\nDigite os 2 numeros que deseja usar: ").split();
            if len(num)!=2:
                raise ValueError
            break
        except ValueError:
            print("\nSao no maximo 2 inputs e numeros precisam estar separados por espacos!")
            sleep(1)
    num = list(map(float,num))
    switch(Oper,num)
            
    

#EX11L3C
num = int(input("Digite o número que deseja realizar a tabuada: "))
max = int(input("Digite o máximo que quer chegar na tabuada: "))
for i in range(max+1):
    print(f"{num}*{i} = {num*i}")