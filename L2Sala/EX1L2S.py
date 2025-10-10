x = []
for i in range(0,3):
    x.append(float(input(f"Digite a {i+1} nota ")))


media=[sum(x)/3]
print(media)
if media[0]>6:
    print("Voce foi aprovado!")
else:
    print(f"Acabe com tudo, voce tirou: {media}")    
