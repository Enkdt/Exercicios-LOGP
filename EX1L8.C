#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

int i,j,x, vft=1;
char tomp[MAX];

typedef struct{
    char nome[MAX],endereco[MAX], mail[MAX], telefone[MAX];
    int idade;
} Cadastro;
Cadastro cad[MAX];
void desfodeString(){
    while ((j = getchar()) != '\n' && j != EOF);
}
void clrScr(){
    system("cls");
    system("clear");
}
void cadastrar(){
    for(i=0;i<MAX;++i){
        clrScr();
        printf("\t\033[43mDados do cliente %d!\033[0m\n",i+1);
        printf("\nDigite a idade do cliente\nInput: ");
        scanf("%d",&cad[i].idade);
        desfodeString();
        printf("\nDigite o nome do cliente\nInput: ");
        fgets(cad[i].nome,MAX,stdin);
        cad[i].nome[strcspn(cad[i].nome,"\n")]='\0';
        printf("\nDigite o endereco\nInput: ");
        fgets(cad[i].endereco,MAX,stdin);
        cad[i].endereco[strcspn(cad[i].endereco,"\n")]='\0';
        printf("\nDigite o e-mail\nInput: ");
        fgets(cad[i].mail,MAX,stdin);
        cad[i].mail[strcspn(cad[i].mail,"\n")]='\0';
        printf("\nDigite o telefone do cliente\nInput: ");
        fgets(cad[i].telefone,MAX,stdin);
        cad[i].telefone[strcspn(cad[i].telefone,"\n")]='\0';
    }
}
void exibir(){
    clrScr();
    printf("\033[43mExibição de dados!\033[0m");
    for(i=0;i<MAX;++i){
        printf("\n\n\033[2;43m%d cliente\033[0m\nIdade: %d\nNome:%s\nEndereço: %s\nEmail: %s\nTelefone: %s",i+1,cad[i].idade,cad[i].nome,cad[i].endereco, cad[i].mail,cad[i].telefone);
    }
}
void procStr(Cadastro xot[]){
    for(i=0;i<MAX && vft==1;++i){
        if(strcmp(tomp,xot[])==0){
            printf("WOW!");
            vft=0;
        };
    }
}
void pesq(){
    clrScr();
    printf("Como deseja procurar?\n1-Idade\n2-Nome\n3-Endereco\n4-Mail\n5-Telefone");
    scanf("%d",&j);
    desfodeString();
    switch(j){
        case 2:
        procStr(cad[].nome);
    }
    printf("Digite o valor temporario\nInput:");
    desfodeString();
    fgets(tomp,MAX,stdin);
    tomp[strcspn(tomp,"\n")]='\0';
    vft==0?printf("Encontrado na posição %d",i):printf("NAN");
}


int main(void){
    while(x!=300){
        scanf("%d",&x);
    switch(x){
        case 1:
        cadastrar();
        break;
        case 2:
        exibir();
        break;
        case 3:
        pesq();
        break;
        default:
        clrScr();
        break;
    }
    }
    return 0;
}