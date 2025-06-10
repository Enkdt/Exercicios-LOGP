#include <stdio.h>
int main(){
    float nota[4],temp;
    int i,j;
    printf("Digite as notas dos alunos\n");
    for(i=0;i<4;i++){
        scanf("%f",&nota[i]);
    }
    for(i=0;i<4;i++){
        for(i=1;i<4;i++){
            if(nota[i]<nota[j]){
                temp = nota[i];
                nota[i] = nota[j];
                nota[j] = temp;
            }
        }
    }
    printf("\nDigite a notas que deseja encontrar\n");
    scanf("%f",&temp);
    i=0; 
    j=0;
    for(i=0;i<4 && j==0;i++){
        nota[i]==temp?j=1:0;
        j==1?printf("Valor encontrado em %d",i+1):0;
    }
    j==0?printf("NAN"):0;
}