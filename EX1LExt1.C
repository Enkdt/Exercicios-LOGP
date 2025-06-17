/*Exercício 1 – Frequência de elementos em um vetor
Ler um vetor de 20 números inteiros entre 0 e 9. Exibir quantas vezes cada número aparece.
Dica: Use um vetor de contagem de tamanho 10.*/
#include <stdio.h>

int main()
{
    int i,j,v[20],v2[10],freq,val;
    freq =0;
    for(i=0;i<20;i++){
        printf("num da pos[%d]\n",i);
        scanf("%d",&v[i]);
        while(v[i]<0 || v[i]>9){
            printf("num da pos[%d] invalido, digite outro\n",i);
            scanf("%d",&v[i]);
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<20;j++){
            i==v[j]?freq+=1:0;
        }
        printf("Numero %d apareceu %d vezes\n",i,freq);
        freq=0;
    }
    //Sistema de pesquisa só pela zoeira :)
    printf("\nDigite o numero que deseja procurar\n");
    scanf("%d",&val);
    while(val<0 || val>9){
        printf("numero invalido, digite outro de 0-9\n");
        scanf("%d",&val);
    }
    
    for(i=0;i<20;i++){
        v[i]==val?freq+=1:0;
    }
    printf("\nO numero %d apareceu %d vezes",val,freq);
    return 0;
}