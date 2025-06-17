/*Exercício 2 – Ordenação crescente de um vetor (Bubble Sort)
Ler um vetor com 15 números inteiros e ordená-lo em ordem crescente usando o algoritmo da bolha (bubble
sort). Exibir o vetor ordenado.*/
#include <stdio.h>

int main()
{
    int i,j,v[15],tomp;
    for(i=0;i<15;i++){
        printf("Numero da pos [%d]\n",i);
        scanf("%d",&v[i]);
    }
    for(i=0;i<15;i++){
        for(j=0;j<15;j++){
            if(v[i]<v[j]){
                tomp = v[j];
                v[j] = v[i];
                v[i] = tomp;
            }
        }
    }
    printf("\nOrdenado de maneira crescente :P\n\n");
    for(i=0;i<15;i++){
        printf("[%d]\t%d\n",i,v[i]);
    }
}