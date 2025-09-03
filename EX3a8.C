#include <stdio.h>
int i,j,x;

void syn(int N,int *p){
    for(i=0;i<=N;++i){
        *p+=i;
        printf("%d\n",*p);
    }
}


int main()
{
    int *p,sum=0;
    p=&sum;
    scanf("%d",&x);
    syn(x,p);
}