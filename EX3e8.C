// e-ler uma matriz A com 12 elementos. Após sua leitura, colocar os elementos em
// ordem crescente. Depois de ler uma matriz B de 12 elementos, colocá-los em
// ordem crescente também. Criar uma matriz C, onde cada elemento de C é a soma
// do elemento correspondente de A com B. Colocar em ordem crescente a matriz C
// e exibir os seus valores

#include <stdio.h>
#define max 3
int i,j;

void sort(float *a){
    float tomp;
    for(i=0;i<max-1;++i){
        for(j=i+1;j<max;j++){
            if(a[i]>a[j]){
                tomp = a[i];
                a[i] = a[j];
                a[j] = tomp;
            }
        }
    }
}

void reg(float *a){
    for(i=0;i<max;++i){
        scanf("%f",&a[i]);
    }
}

void print(float *a){
    for(i=0;i<max;++i){
        printf("\n%f\n",a[i]);
    }
}

void sum(float *zetta,float *d, float *c){
    for(i=0;i<max;++i){
    zetta[i] = d[i] + c[i];
    }
}

int main(void){
    float a[max],b[max],z[max],*c,*d,*zetta;
    c = a;
    d = b;
    zetta = z;
    reg(c);
    reg(d);
    sort(c);
    sort(d);
    sum(zetta,d,c);
    sort(zetta);
    print(c);
    print(d);
    print(zetta);
}