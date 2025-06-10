#include <stdio.h>
#include <math.h>
int main(void){
    int i, j;
    float a[5], b[5],tmpo;
    for(i=0;i<5;i++){
        b[i]=1;
        scanf("%f",&a[i]);
        while(fmod(a[i],1)!=0 || a[i]<0){
            printf("erro, fatorial não pode ser inteiro");
            scanf("%f",&a[i]);
        }
        for(j=1;j<=a[i];j++){
        b[i] *= j;
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(b[i]<b[j]){
                tmpo = b[i];
                b[i] = b[j];
                b[j] = tmpo;
            }
        }
    }
    printf("\nEm ordem:\n");
    for(i=0;i<5;i++){
        printf("%.2f\n",b[i]);
    }
}