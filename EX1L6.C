/*1)- Ler 2 matrizes A e B, cada uma delas de 2D com 5 linhas e 3
colunas. Criar uma matriz C de mesma dimensão, onde C é formada
pela soma dos elementos da matriz A com os elementos da matriz B.
Exibir essa matriz.*/
#include <stdio.h>

int main(void)
{
    int i,j,a[3][5], b[3][5],c[3][5],temp,x,y;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
            printf("b[%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Lista bunitinha :)\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d \t[i: %d]\t[j:%d]\n",c[i][j],i,j);
        }
    }
    printf("\nNegócio de pesquisa teste aq\n");
    scanf("%d",&temp);
    x=0;
    y=0;
    for(i=0;i<3 && x==0;i++){
        for(j=0;j<5 &&x==0;j++){
            temp==c[i][j]?x=1:0;
            x==1?printf("Localizado em c[%d][%d]\n",i,j):0;
        }
    }
    x==0?printf("NAN\n"):0;
}   