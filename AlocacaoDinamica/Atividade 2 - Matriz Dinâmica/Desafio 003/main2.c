#include <stdio.h>
#include <stdlib.h>


double **alocaMatriz(double **mat, double n_linhas, double m_colunas){
    mat= malloc(n_linhas* sizeof(double*));

    for(int i=0; i<n_linhas; i++){
        mat[i]= malloc(m_colunas* sizeof(double));}
    return mat;
}

int main(void) {
    double **matA, **matB, **matSoma;
    int n_linhas,m_colunas;


    printf("Qtd de linhas :\t");
    scanf("%d",&n_linhas);
    printf("Qtd de colunas:\t");
    scanf("%d",&m_colunas);

    matA= alocaMatriz(matA,n_linhas,m_colunas);
    matB= alocaMatriz(matB,n_linhas,m_colunas);
    matSoma= alocaMatriz(matSoma,n_linhas,m_colunas);



    printf("Matriz de A\n");
    for(int i=0; i<n_linhas; i++){
        for(int j=0; j<m_colunas; j++){
            printf("\nDigite o valor da posição[%d][%d] na Matriz A\n", i, j);
            scanf("%lf",&matA[i][j]);
        }
    }
    printf("Matriz de B\n");
    for(int i=0; i<n_linhas; i++){
        for(int j=0; j<m_colunas; j++){
            printf("\nDigite o valor da posição[%d][%d] na Matriz B\n", i, j);
            scanf("%lf",&matB[i][j]);
        }
    }

    for(int i=0; i<n_linhas; i++){
        for(int j=0; j<m_colunas; j++){
            matSoma[i][j] = (matA[i][j]+matB[i][j]);
        }
    }


    printf("Matriz de soma\n");
    for(int i=0; i<m_colunas; i++){
        for(int j=0; j<n_linhas; j++){
            printf("\nO valor na posição[%d][%d]= %.2lf\n", i, j, matSoma[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < n_linhas; i++) {
        free(matA[i]);
        free(matB[i]);
        free(matSoma[i]);

    }
    free(matA);
    free(matB);
    free(matSoma);

    return 0;
}