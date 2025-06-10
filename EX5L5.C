#include <stdio.h>
int main(void){
int a[2],b[3],c[5],j,t;
    for(int i=0; i<2;i++){
        scanf("%d",&a[i]);
        c[i] = a[i];
    }
    for(int i=0; i<3;i++){
        scanf("%d",&b[i]);
        c[i+2] = b[i];
    }
    for(int i = 0;i<5;i++){
        for(j=0;j<5;j++){
            if(c[i]>c[j]){
                t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
        }
    }
    printf("\n");
    for(int i=0; i<5;i++){
        printf("%d\n",c[i]);
    }
}