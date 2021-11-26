#include <stdio.h>
#include <stdlib.h>

void alocaMatriz(int **mat, int n_linhas, int n_colunas){
    mat = (int**)malloc(n_linhas * sizeof(int*));

    for(int i=0; i<n_linhas; i++){

        mat[i]= (int*)malloc(n_colunas* sizeof(int));
    }

    for(int i=0; i<n_linhas; i++){
        for(int j=0; j<n_colunas; j++){
            mat[i][j] = 0;
        }
    }


}

void mostrarMatriz(int **mat, int n_linhas, int n_colunas){

//    for (int i = 0; i < n_colunas; ++i) {
//        printf("%d\t", n_colunas);
//    }
    for (int i = 0; i < n_linhas; i++) {
//        printf("%d\t", n_linhas);
        for (int j = 0; j < n_colunas; j++) {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }

}

int main(void) {

    int **mat, **matrizTransposta,n_linhas,n_colunas;

    printf("Digite o numeros de linhas da Matriz: ");
    scanf("%d",&n_linhas);

    printf("\nDigite o coluna de linhas da Matriz: ");
    scanf("%d",&n_colunas);

//    mat = malloc(n_linhas* sizeof(int*));
//    matrizTransposta = malloc(n_linhas* sizeof(int*));

    alocaMatriz(mat,n_linhas,n_colunas);
    alocaMatriz(matrizTransposta,n_colunas,n_linhas);


    for(int i=0; i<n_linhas; i++){
        for(int j=0; j<n_colunas; j++){
            printf("\nDigite o valor da posição[%d][%d]: ", i, j);
            scanf("%d",&mat[i][j]);
            printf("slslsl");
        }
    }



    for(int i=0; i<n_linhas; i++){
        for(int j=0; j<n_colunas; j++){
            matrizTransposta[j][i] = mat[i][j];
        }
    }

    mostrarMatriz(mat,n_linhas,n_colunas);
    mostrarMatriz(matrizTransposta,n_colunas,n_linhas);


    for (int i = 0; i < n_linhas; i++) {
        free(mat[i]);
        free(matrizTransposta[i]);
    }
    free(mat);
    free(matrizTransposta);

    return 0;
}
