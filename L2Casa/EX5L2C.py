x = float(input("Digite o número:"))
hr = float(input("Digite o tempo trabalhado:"))
if x<800:
    sal = x
elif 800>=x and x<=1600:
    sal=x-(x*0.08)-(x*0.05)
else:
    sal=x-(x*0.15)-(x*0.07)

if hr>160:
    extra = x/320*hr-160
    sal+=extra

print("salário:",sal)