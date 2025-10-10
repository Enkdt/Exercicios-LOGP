x = []
y = []
for i in range(0,2):
    x.append(int(input(f"Digite o {i+1} numero: ")))
    if x[i]%4==0 or x[i]%5==0:
        y.append(x[i])
print(y)