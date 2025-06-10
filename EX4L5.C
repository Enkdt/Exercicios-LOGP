#include <stdio.h>
int main(void){
int x[12],y[12],z[12], i, j,temp;
    printf("Insira os valores de x, são 12\n");
    for(i=0;i<12;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
            if(x[i]>x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("\nInsira os valores de y, são 12\n");
    for(i=0;i<12;i++){
    scanf("%d",&y[i]);
    }
    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
            if(y[i]>y[j]){
            temp = y[i];
            y[i] = y[j];
            y[j] = temp;
            }
        }
    }
    for(i=0;i<12;++i){
        z[i] = x[i] - y[i];
    }
    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
        if(z[i]>z[j]){
            temp = z[i];
            z[i] = z[j];
            z[j] = temp;
            }
        }
    }
    printf("\nLista ordenada z\n");
    for(i=0;i<12;++i){
        printf("[%d] %d\n",i,z[i]);
    }
}