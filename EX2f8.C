#include <stdio.h>
#define max 3
int i,j,x;

void fib(int N,int *p,int *r,int *s){
    for(i=0;i<N;++i){
        *p+=*r;
        *r=*s;
        *s=*p;
        printf("%d\n",*p);
    }
}


int main()
{
    int *p,*r,*s,sum=0,ant=0,atu=1;
    p=&sum;
    r=&ant;
    s=&atu;
    scanf("%d",&x);
    while(x<2){
        scanf("%d",&x);
    }
    fib(x,p,r,s);
    printf("\n%d %d %d",*p,*r,*s);
}