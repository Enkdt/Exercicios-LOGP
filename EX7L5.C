#include <stdio.h>
int main(void){
int a[2],b[2],i,j,temp;
for(i=0;i<2;i++){
    scanf("%d",&a[i]);
        b[i] = a[i]+2;
    }
    for(i=0;i<2;i++){
        for(j=1;j<2;j++){
            if(b[i]>b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    scanf("%d",&temp);
    i=0;
    j=0;
    while(i<2 && j == 0){
        if(b[i]==temp){
        j = 1;
        }
        else{
            i++;
        }
        if(j==1){
            printf("Valor encontrado em %d",i+1);
        }
    }
    if(j==0){
    printf("NAN");
    }
}