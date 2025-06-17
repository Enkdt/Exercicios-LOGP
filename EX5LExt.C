/*Exercício 5 – Procurar maior palavra em uma string
Ler uma frase (string com até 200 caracteres). Determinar e exibir a maior palavra (em número de letras)
presente na frase.
Dica: Use um laço para contar os tamanhos das palavras entre espaços.
*/
#include <stdio.h>
#include <string.h>

int main(void){
    int i,j,len,cont,max,maxword; 
    max=0;
    char x[200];
    fgets(x,200,stdin);
    len = strlen(x);
    for(i=0;i<len;i++){
        printf("%c\n",x[i]);
        if(x[i]==' ' || x[i]=='\n'){
            if(cont>max){
                max = cont;
            }
        cont = 0;
        }
        else{
            cont+=1;
        }
    }
    printf("Maior palavra: %d caracteres\n",max);
}

//add pra exibir a palavra maior