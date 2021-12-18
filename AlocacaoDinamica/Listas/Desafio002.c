#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct historico {
    char titulo[51];
    struct historico *prox;
};

typedef struct historico Historico;

Historico *primeiro;

#define MAX 10
int total = 0;

void push() {
    if(total < MAX){
        Historico *new_historico = malloc(sizeof(Historico));
        printf("Digite a url do site: ");
        scanf("%s", new_historico->titulo);
        new_historico->prox = primeiro;
        primeiro = new_historico;
        total++;
    }

}

void pop() {
    if(primeiro == NULL){
        printf("Pilha vazia");
    } else{

    }

}

void top() {

}

void showAll() {

}

int main() {

}


