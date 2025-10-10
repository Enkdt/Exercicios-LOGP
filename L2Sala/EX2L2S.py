x = []
for i in range(0,3):
    x.append(float(input(f"Digite a {i+1} nota ")))


media=[sum(x)/3]
print(media)
if media[0]>6:
    print("Voce foi aprovado!")
else:
    media.append(float(input("Digite a nota do exame ")))
    newMedia = sum(media)/2
    if newMedia>=5:
        print("Aprovado por exame!")
    else:
        print(f"Acabe com tudo, voce tirou: {newMedia}")    
