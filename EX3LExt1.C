/*3 – Busca em vetor ordenado (Busca Binária Simples)
Após ler e ordenar um vetor de 10 números inteiros (ordem crescente), solicitar um número ao usuário e
informar se ele está no vetor.*/
#include <stdio.h>

int main()
{
    int i,j,v[10],tomp;
    for(i=0;i<10;i++){
        printf("pos [%d]\n",i);
        scanf("%d",&v[i]);
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(v[i]<v[j]){
                tomp = v[j];
                v[j] = v[i]; //ensina a fazer o merge ou radix miyuki :)))))
                v[i] = tomp;
            }
        }
    }
    tomp = 0;
    printf("Digite um número que deseja procurar\n");
    scanf("%d",&tomp);
    j = 0;
    for(i=0;i<10 && j==0;i++){
        tomp==v[i]?j=1:0;
        j==1?printf("Numero encontrado na pos [%d]",i):0;
    }
    j==0?printf("NAN"):0;
}
