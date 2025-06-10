#include <stdio.h>
int main(void){
    int x[12], i, j,temp;
    for(i=0;i<13;i++){
    scanf("%d",&x[i]);
    }
    for(i=0;i<13;i++){
        for(j=i+1;j<13;j++){
            if(x[i]>x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(i=0;i<13;++i){
        printf("[%d] %d\n",i,x[i]);
    }
}