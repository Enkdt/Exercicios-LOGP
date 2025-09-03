#include <stdio.h>
#define max 3
int i,j,x;

void read(float *f){
    for(i=0;i<max;++i){
        scanf("%f",&f[i]);
    }
}

void prin(float *f){
    for(i=0;i<max;++i){
        printf("%f\n",f[i]);
    }
}

void spPrin(float *f){
    for(i=0;i<max*2;++i){
        printf("%f\n",f[i]);
    }
}

void sum(float *maxArr,float *g,float *h){
    for(i=0;i<max;++i){
        maxArr[i]=g[i];
        maxArr[i+max]=h[i];
    }
}
int main(){
    float a[max],b[max],c[max*2],*aa,*bb,*cc;
    read(a);
    read(b);
    prin(a);
    prin(b);
    sum(c,a,b);
    printf("\n");
    spPrin(c);
}