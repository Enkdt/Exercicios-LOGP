MAX = 9
a,b = ([0]*MAX for i in range(2))

for i in range (MAX):
    while True:
        try:
            a[i] = int(input(f"Digite o digito {i} do RAV "))
            break
        except ValueError:
            print("Valor invalido!")
            continue

for i in range(MAX):
    b[i] = a[i]

b[2] = a[7]
b[3] = a[6]
b[6] = a[2]
b[7] = a[3]    
print("RAC:",b)

#ex2
MAX = 9
a,b = ([0]*MAX for i in range(2))

for i in range (MAX):
    while True:
        try:
            a[i] = int(input(f"Digite o digito {i} do RA "))
            break
        except ValueError:
            print("Valor invalido!")
            continue

j=MAX-1
for i in range(MAX):
    if i > 4:
        b[i] = a[j]
        j-=1
    else:
        b[i] = a[i]
        
print("RA Final:",b)

#Ex3
from math import ceil
MAX = 9
a,b = ([0]*MAX for i in range(2))

for i in range (MAX):
    while True:
        try:
            a[i] = b[i] = int(input(f"Digite o digito {i} do RAV "))
            break
        except ValueError:
            print("Valor invalido!")
            continue

b[0],b[1] = b[1],b[0]
b[MAX-1],b[MAX-2] = b[MAX-2],b[MAX-1]
print("RAC:",b)