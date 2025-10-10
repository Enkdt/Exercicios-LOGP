x = []
for i in range(0,3):
    x.append(float(input(f"Digite a {i+1} nota ")))
x.sort()
print(x[0],x[2],x[1])