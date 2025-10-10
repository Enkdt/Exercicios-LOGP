import math
x = float(input("Digite o número: "))
if x%1>0.5:
    print(math.ceil(x))
else:
    print(math.floor(x))
