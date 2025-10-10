x = []
for i in range(0,2):
    x.append(float(input(f"Digite o {i+1} numero")))
    
print("A diferença entre eles é: ",abs(x[0]-x[1]))