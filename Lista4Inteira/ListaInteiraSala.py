a = []
for i in range(5):
    while True:
        try:
            b = int(input("Digite um numero:"))
            break;
        except ValueError:
            print("Valor invalido, digite novamente\n")
    a.append(b*3)
print(a)

#Ex2
a = []
b = []
for i in range(6):
    while True:
        try:
            x = int(input("Digite um numero:"))
            break;
        except ValueError:
            print("Valor invalido, digite novamente\n")
    a.append(x)
print(a)

i = j = 1
for i in range(1,7):
    mult = 1
    for j in range(1,a[i-1]+1):
        mult *= j
    b.append(mult)
print(b)

#Ex3
a,b,c = ([] for i in range(3))
for i in range(5):
    while True:
        try:
            x = int(input("Digite um numero p/ array A: "))
            y = int(input("Digite um numero p/ a array B: "))
            break;
        except ValueError:
            print("Valor invalido, digite novamente\n")
    a.append(x)
    b.append(y)
    c.append(a[i]-b[i])
print("Valores subtraidos: ",c)

#ex4
a,b,c = ([] for i in range(3))
for i in range(5):
    while True:
        try:
            x = int(input("Digite um numero p/ array A: "))
            y = int(input("Digite um numero p/ a array B: "))
            break;
        except ValueError:
            print("Valor invalido, digite novamente\n")
    a.append(x)
    b.append(y)
c.extend(a)
c.extend(b)
print(c)

#ex5
a,b,c = ([] for i in range(3))
for i in range(50):
    while True:
        try:
            x = int(input("Digite um numero p/ array B: "))
            if i<20:
                y = int(input("Digite um numero p/ a array A: "))
                a.append(y)
            b.append(x)
            break;
        except ValueError:
            print("Valor invalido, digite novamente\n")
c.extend(a)
c.extend(b)

#ex6
a,b = ([] for i in range(2))
for i in range(8):
    while True:
        try:
            x = int(input("Digite um numero p/ array A: "))
            break;
        except ValueError:
            print("Valor invalido, digite novamente\n")
    a.append(x)
    b.append(x*x)
        
print("Valores ao quadrado\n",b)

#ex7
MAX = 10
a = []
b = [0]*MAX
j=MAX
for i in range(MAX):
    j-=1
    while True:
        try:
            x = int(input("Digite um numero p/ array A: "))
            break;
        except ValueError:
            print("Valor invalido, digite novamente\n")
    a.append(x)
    b[j] = a[i]
        
print("Valores ao contrário\n",b)