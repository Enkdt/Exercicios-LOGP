/*Exercício 4 – Soma por linha e por coluna em uma matriz 5×5
Ler uma matriz 5x5 de inteiros. Exibir a soma de cada linha e a soma de cada coluna.*/
#include <stdio.h>

int main(void){
    int m[5][5],s[10],i,j,sum;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Posição [%d][%d]",i,j);
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++){
        s[i] = 0;
        s[i+5] = 0;
        for(j=0;j<5;j++){
            s[i] += m[i][j];
            s[i+5] += m[j][i];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    
    printf("\nLista soma linhas\t\tLista soma colunas\n");
    for(i=0;i<5;i++){
        printf("linha%d: %d\t\t\tcoluna %d: %d\n",i+1,s[i],i+1,s[i+5]);
    }
    
}