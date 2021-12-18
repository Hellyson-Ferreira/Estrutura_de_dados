#include <stdio.h>
#include <stdlib.h>

struct arquivo {
    char caminho[100];
    double tamanho;
    struct arquivo *proximo;
};

typedef struct arquivo Arquivo;


Arquivo *comecoFila = NULL;
Arquivo *fimFila = NULL;

void add() {
    Arquivo *arquivo1 = malloc(sizeof(Arquivo));

    printf("\nCaminho: ");
    scanf("%s", arquivo1->caminho);

    printf("\nTamanho: ");
    scanf("%lf", arquivo1->tamanho);


    if (comecoFila == NULL) {
        comecoFila = arquivo1;
        arquivo1->proximo = NULL;
        fimFila->proximo = arquivo1;
    } else{
        fimFila->proximo = arquivo1;
        fimFila=arquivo1;
    }

}

int main() {


    return 0;
}
