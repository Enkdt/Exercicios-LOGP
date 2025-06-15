/*2)- Ler 2 matrizes A e B, cada uma com 1D para 7 elementos. Criar
uma matriz C de 2D, onde a 1ª coluna deverá ser formada pelos
elementos da matriz A e a 2ª coluna deverá ser formada pelos
elementos da matriz B. Exibir a matriz C.*/
#include <stdio.h>

int main(void)
{
    int i,j,a[7], b[7],c[2][7],temp,x,y;
    
    for(j=0;j<7;j++){
            printf("a[%d]\n",j);
            scanf("%d",&a[j]);
            printf("b[%d]\n",j);
            scanf("%d",&b[j]);
    }
    for(j=0;j<7;j++){
        c[0][j] = a[j];
        c[1][j] = b[j];
    }
    printf("Lista bunitinha :)\n");
    for(j=0;j<7;j++){
        printf("%d c[0][%d]\t %d c[1][%d]\n",c[0][j],j,c[1][j],j);
    }
}