x = []
for i in range(0,3):
    x.append(float(input(f"Digite o {i+1} numero: ")))
if x[0]<x[1]+x[2] and x[1]<x[0]+x[2] and x[2]<x[0]+x[1]:
    if x[0] == x[1] == x[2]:
        print("É equilátero")
    elif x[0]!=x[1]!=x[2]:
        print("É escaleno")
    else:
        print("É isóceles")
else:
    print("Não é triangulo")