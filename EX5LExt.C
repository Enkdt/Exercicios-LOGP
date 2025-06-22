/*Exercício 5 – Procurar maior palavra em uma string
Ler uma frase (string com até 200 caracteres). Determinar e exibir a maior palavra (em número de letras)
presente na frase. Dica: Use um laço para contar os tamanhos das palavras entre espaços.
*/
#include <stdio.h>
#include <string.h>
#define Y 200
int main(void){
    int i,j,cont=0,max=0;
    char x[Y],mW[Y],cW[Y];
    printf("Digite a frase em que deseja encontrar a maior palavra :)\n");
    fgets(x,Y,stdin); //sabomba pega o input
    fflush(stdin); // limpa a bodega do buffer
    for(i=0;i<strlen(x);i++){
        if(x[i]==' ' || x[i]=='\n'){ //separa palavras, o \n é p finalizar a bodega
            if(cont>max){
                max = cont;
                strcpy(mW,cW); //maxWord = currentWord
            }
        cont = 0;
        }
        else{
            cW[cont] = x[i];
            cont++;
        }
    }
    printf("Maior palavra: %s\n%d caracteres\n",mW,max);
} //Obs: Treinar strings plmds
