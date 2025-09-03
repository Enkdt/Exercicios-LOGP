#include <stdio.h>
#define max 3
int i;

void potencia(float *s,float *n, int *p){
   for(i=0;i<*p;++i){
       *s*=*n;
   } 
}

int main(void){
    float num, *n,sum=1,*s;
    int pot,*p;
    scanf("%f %d",&num,&pot);
    s = &sum;
    n = &num;
    p = &pot;
    potencia(s,n,p);
    printf("%f",*s);
}