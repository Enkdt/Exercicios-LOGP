x = []
y = []
for i in range(0,3):
    x.append(int(input(f"Digite o {i+1} numero: ")))
    if x[i]%3==0 and x[i]%2==03:
        y.append(x[i])
print(y)
