#include <stdio.h>
#include <stdlib.h>

int **getMatrixByFile(char fileName[20]) {
    int n_linhas, n_colunas;

    int **mat;

    FILE *ptrArq;

    ptrArq = fopen(fileName, "r");

    if (ptrArq == NULL) {
        printf("Arquivo nao encontrado ou não há memoria disponível");
        printf("\nSaindo do programa");
        exit(1);
    }


    fscanf(ptrArq,
           "%d %d", &n_linhas, &n_colunas);


    mat = malloc(n_linhas * sizeof(int *));

    for (int i = 0;i < n_linhas; i++) {
        mat[i] = malloc(n_colunas* sizeof(int));
    }
    for (int i = 0; i < n_linhas;++i) {
        for (int j = 0; j < n_colunas; ++j) {
            fscanf(ptrArq,"%d", &mat[i][j]);

        }

    }
    return  mat;
}

int main(void) {
    int n_linhas = 10, n_colunas = 8;

    int **mat = getMatrixByFile("../matriz.txt");
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            printf("\nO valor da posição na matriz[%d][%d]= %d\n", i, j, mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}