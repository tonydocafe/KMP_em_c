#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1000

int proximo[TAM];

void inicia_prox(char *padrao){
    int i = 0, j = -1;
    int enum_padrao = strlen(padrao);
    proximo[0] = -1;
    while(i < enum_padrao){
        if((j == -1) || (padrao[i] == padrao[j])){
            i++;
            j++;
            proximo[i] = j;
        } else {
            j = proximo[j];
        }
    }
}

int ALG1 (char* padrao, char* dados){
    int i = 0, j = 0;
    int enum_padrao = strlen(padrao);
    int enum_dados = strlen(dados);
    inicia_prox(padrao);
    while((i < enum_dados) && (j < enum_padrao)){
        if((j == -1) || (dados[i] == padrao[j])){
            i++;
            j++;
        } else {
            j = proximo[j];
        }
    }
    return (j == enum_padrao) ? (i - j) : -1;
}

int main(){
    char padrao[TAM];
    char dados[TAM];
    
    printf("Digite o padrão a ser capturado:\n");
    fgets(padrao, sizeof(padrao), stdin);
    padrao[strcspn(padrao, "\n")] = '\0';
    
    printf("Digite os dados a serem analisados:\n");
    fgets(dados, sizeof(dados), stdin);
    dados[strcspn(dados, "\n")] = '\0';
    
    int posicao = ALG1(padrao, dados);
    if (posicao != -1) {
        printf("O padrão foi encontrado na posição %d\n", posicao);
    } else {
        printf("O padrão não foi encontrado\n");
    }
    
    return 0;
}
