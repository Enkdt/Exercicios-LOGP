/*2)- Ler 8 elementos em uma matriz A tipo vetor. Criar uma matriz B de mesma
dimensão com os elementos da matriz multiplicados por 5. Exibir a matriz B na
ordem crescente. Criar uma rotina para pesquisar os elementos armazenados
na matriz B.*/

#include <stdio.h>
int main(void){
    float a[8],b[8],tomp;
    int i,k,j;
    for(i=0;i<8;i++){
        scanf("%f", &a[i]);
        b[i] = a[i]*5;
    }
    for(i=0;i<8;i++){
        for(j=0;j>8;j++){
            if(b[i]>b[j]){
                tomp = b[j];
                b[j] = b[i];
                b[i] = tomp;
            }
        }
    }
    i=0;
    j=0;
    scanf("%f",&tomp);
    for(i=0;i<8 && j==0;i++){
        tomp == b[i]?j = 1:0;
        j==1?printf("Numero encontrado na posição %d",i+1):0;
    }
    j==0?printf("Número não encontrado"):0;
}