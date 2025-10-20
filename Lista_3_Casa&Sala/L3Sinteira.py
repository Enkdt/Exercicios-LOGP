#EX1L3S
for i in range (1,21,2):
    print(i)

#EX2L3S
a=0
for i in range (1,101):
    a+=i
print(a) 

#EX3L3S
num = int(input("Digite o número que deseja realizar a tabuada: "))
max = int(input("Digite o máximo que quer chegar na tabuada: "))
for i in range(max+1):
    print(f"{num}*{i} = {num*i}")

#EX4L3S  
i=0
n =  float(input("Digite um número"))
while n>50 or n<=0:
    n = float(input("Numero invalido! Digite outro"))
while(n*3<250):
    i+=1
    n*=3
print(f"numero de iterações {i}\nNumero final:{n}")

#EX5L3S  
for i in range(0,201,4):
    print(i)

#EX6L3S  
for i in range(15,201,1):
    print("O quadrado de "+str(i)+" é:",i*i)

#EX7L3S  
for i in range(1,15,1):
    sq*=i
    print(sq)

#EX7L3S  versão alt
sq = float(input("Digite o numero que deseja elevar"))
ran = input("Digite o valor máximo e mínimo para começar").split()
while len(ran)!=2:
    print("Valores inválidos, digite outros")
    ran = input("Digite o valor máximo e mínimo para começar").split()
ran = list(map(int,ran))
x = 1
for i in range(ran[0],ran[1]+1,1):
    x*=sq
    print(f"O número {sq:.2f} elevado a {i} é: {x:.2f}")

#EX8L3S
new=0
antPrev = 0
prev = 1
for i in range(1,16,1):
    new = antPrev + prev
    print(prev)
    antPrev = prev
    prev = new

#EX9L3S
sq = float(input("Digite o numero que deseja elevar"))
ran = input("Digite o valor máximo e mínimo para começar").split()
while len(ran)!=2:
    print("Valores inválidos, digite outros")
    ran = input("Digite o valor máximo e mínimo para começar").split()
ran = list(map(int,ran))
x = 1
for i in range(ran[0],ran[1]+1,1):
    x*=sq
    print(f"O número {sq:.2f} elevado a {i} é: {x:.2f}")

#EX10L3S
sq = float(input("Digite o numero que deseja elevar"))
ran = int(input("Digite por quanto deseja elevar"))
x=1
for i in range(0,ran,1):
    x*=sq
    print(x)

print(f"O número {sq} elevado a {i+1} é: {x}")

#EX11L3S
li = []
for i in range(0,5,1):
    a = float(input("Digite o número que deseja adicionar a lista"))
    li.append(a)
li.sort()
print(li)
