/*4- Ler 2 matrizes A e B, cada uma com 1D para 4 elementos. Criar
uma matriz C de 2D, onde a 1ª coluna da matriz C deverá ser formada
pelos elementos da matriz A multiplicados por 2 e a 2ª coluna deverá
ser formada pelos elementos da matriz B subtraídos de 5. Exibir a
matriz C.*/
#include <stdio.h>

int main(void)
{
    int a[4], b[4],c[2][4],i,j;
    for(i=0;i<4;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        printf("b[%d]",i);
        scanf("%d",&b[i]);
        c[0][i] = a[i]*2;
        c[1][i] = b[i]-5;
    }
    printf("\nLista ordenaadaa :D\n");
    for(i=0;i<4;i++){
        printf("%d c[0][%d] \t %d c[0][%d]\n",c[0][i],i,c[1][i],i);
    }
}