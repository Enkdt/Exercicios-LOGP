#include <stdio.h>

int main(void){
int a[3],b[3],i,j,k;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
        b[i] = a[i] * a[i];
    }
    scanf("%d",&k);
    j=0;
    i = 0;
    while(i<3 && j==0){
        if(b[i]==k){
            j = 1;
        }
        else{
            i++;
        }   
        if(j==1){
            printf("o valor foi encontrado em %d",i+1);
            break;
        }
    }
    if(j==0){
        printf("Nan");
    }
}