/*3- Ler uma matriz A de 1D com 10 elementos. Criar uma matriz B de
2D com 3 colunas, onde:
- a 1ª coluna da matriz B é formada pelos elementos da matriz A
somados com mais 5;
- a 2ª coluna é formada pelo valor do cálculo da fatorial de cada
elemento correspondente da matriz A;
- a 3ª coluna deverá ser formada pelos quadrados dos elementos
correspondentes da matriz A.
Exibir a matriz B.*/
#include <stdio.h>

int main(void)
{
    int a[10], b[3][10],i,j,fac;    
    for(i=0;i<10;i++){
        printf("a[%d]\n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        fac=1;
        for(j=a[i];j!=0;j--){
            fac*=j;
        }
        b[0][i] = a[i]+5;
        b[1][i] = fac;
        b[2][i] = a[i]*a[i];
    }
    printf("\nLista bunitinha :)\n\n");
    printf("Lista +5 \t Lista Fac \t Lista Quadrado\n\n");
    for(i=0;i<10;i++){
        printf("%d b[0][%d]\t %d b[1][%d]\t %d b[2][%d]\n",b[0][i],i,b[1][i],i,b[2][i],i);
    }
}