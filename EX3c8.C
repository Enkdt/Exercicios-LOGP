#include <stdio.h>
#define max 3
int i;

void prestação(float *s,float *v,float *tx,int *t){
    *s = *v + (*v * (*tx/100) * *t);
}

int main(void){
    float valor, sum,*s,*v,taxa,*tx;
    int tempo,*t;
    scanf("%f %f %d",&valor,&taxa,&tempo);
    s = &sum;
    v = &valor;
    tx = &taxa;
    t = &tempo;
    prestação(s,v,tx,t);
    printf("%f",*s);
}