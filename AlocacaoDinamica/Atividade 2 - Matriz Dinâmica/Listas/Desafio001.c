#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct noDaLista {
    char titulo[51];
    char autor[51];
    int ano;
    int quantidade;
    struct noDaLista *prox;
};

typedef struct noDaLista NoDataLista;

NoDataLista *primeiro;

void adicionarLivro() {
    NoDataLista *aux = malloc(sizeof(NoDataLista));

    printf("Digite o titulo do livro: ");
    scanf("%s", aux->titulo);
    printf("Digite o nome do autor: ");
    scanf("%s", aux->autor);

    printf("Digite o ano de lançamento: ");
    scanf("%d", &aux->ano);

    printf("Quantidade do livro: ");
    scanf("%d", &aux->quantidade);
    aux->prox = primeiro;
    primeiro = aux;

}


int quntLivrosAcervo(NoDataLista *primeiroElemento) {
    int soma = 0;
    while (primeiroElemento != NULL) {
        soma = soma + primeiroElemento->quantidade;
        primeiroElemento = primeiroElemento->prox;
    }

    return soma;
}

void *bucarPorAnoLancamento(NoDataLista *primeiroElemento, int ano) {

    if (primeiroElemento != NULL) {
        if (ano == primeiroElemento->ano) {
            printf("\nTitulo: %s", primeiroElemento->titulo);
            printf("\nAutor: %s", primeiroElemento->autor);
            printf("\nAno de lancamento: %d", primeiroElemento->ano);
            printf("\nQuantidade disponivel: %d", primeiroElemento->quantidade);
            bucarPorAnoLancamento(primeiroElemento->prox, ano);

        }


        bucarPorAnoLancamento(primeiroElemento->prox, ano);
    }
}

int main() {
    int op;

    while (true) {

        printf("\n Qunatidade de livros no estoque %d",quntLivrosAcervo(primeiro));
        printf("\n 1-Buscar livro por ano de lançamento\n 2-Adicionar livro\n 3-Sair\n Digite o número da opção: ");
        scanf("%d", &op);

        if (op == 1) {
            int ano;
            printf("\nDigite o ano de lancamento do livro: ");
            scanf("%d", &ano);

            bucarPorAnoLancamento(primeiro,ano);

        } else if (op == 2) {
            adicionarLivro();
        } else if (op == 3) {
            break;
        } else
            printf("\nOpção invalida");
    }
}


