x = (int(input(f"Digite o numero: ")))
while(x>12 or x<1):
    print("morra")
    x = (int(input(f"Digite o numero: ")))

mes = ["janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"]
for i in range (1,12):
    if x==i:
        print(mes[i-1])