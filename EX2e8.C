#include <stdio.h>
#define max 3
int i,j;
float a[max], c [max],d [max]={0};

void reg(float cr[]) {
	for(i=0; i<max; ++i) {
		scanf("%f",&cr[i]);
	}
}
void sort(float ar[]) {
	float x;
	for(i=0; i<max-1; ++i) {
		for(j=i+1; j<max; ++j) {
			if(ar[i] > ar[j]) {
				x = ar[i];
				ar[i]= ar[j];
				ar[j] = x;
			}
		}
	}
}

void soma(float ar[],float br[],float cr[]) {
	for(i=0; i<max; ++i) {
		ar[i]= br[i]+cr[i];
	}
}

void exibir(float ar[]) {
	for(i=0; i< max; ++i) {
		printf("%f\n", ar[i]);
	}
}

int main()
{
	reg(a);
	sort(a);
	exibir(a);
	reg(c);
	sort(c);
	exibir(c);
	soma(d,a,c);
	sort(d);
	exibir(d);
	return 0;
}