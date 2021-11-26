//#include <stdio.h>
//#include <stdlib.h>
//
//int **alocaMatriz(int **mat, int n_linhas, int m_colunas){
//    mat= malloc(n_linhas* sizeof(int*));
//
//    for(int i=0; i<n_linhas; i++){
//
//        mat[i]= malloc(m_colunas* sizeof(int));
//    }
//
//    return mat;
//}
//
//int main(void) {
//
//    int **mat=NULL, **matrizTransposta,n_linhas,m_colunas;
//
//    printf("Qtd de linhas:\t");
//    scanf("%d",&n_linhas);
//    printf("Qtd de colunas:\t");
//    scanf("%d",&m_colunas);
//
//    mat= alocaMatriz(mat,n_linhas,m_colunas);
//    matrizTransposta = alocaMatriz(mat,m_colunas,n_linhas);
//
//    for(int i=0; i<n_linhas; i++){
//        for(int j=0; j<m_colunas; j++){
//            printf("\nDigite o valor da posição[%d][%d]\n", i, j);
//            scanf("%d",&mat[i][j]);
//        }
//    }
//
//
//
//    for(int i=0; i<n_linhas; i++){
//        for(int j=0; j<m_colunas; j++){
//            matrizTransposta[j][i] = mat[i][j];
//        }
//    }
//
//    for(int i=0; i<n_linhas; i++){
//        for(int j=0; j<m_colunas; j++){
//            printf("\nO valor na posição[%d][%d]= %d\n", i, j, mat[i][j]);
//        }
//        printf("\n");
//    }
//    for(int i=0; i<m_colunas; i++){
//        for(int j=0; j<n_linhas; j++){
//            printf("\nO valor na posição[%d][%d]= %d\n", i, j, matrizTransposta[i][j]);
//        }
//        printf("\n");
//    }
//
//    for (int i = 0; i < n_linhas; i++) {
//        free(mat[i]);
//        free(matrizTransposta[i]);
//    }
//    free(mat);
//    free(matrizTransposta);
//
//    return 0;
//}


#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz(int n_linhas, int m_colunas){
    int **mat = malloc(n_linhas* sizeof(int*));

    for(int i=0; i<n_linhas; i++){
        mat[i]= malloc(m_colunas* sizeof(int));
    }

    return mat;
}


int **matriz_transposta(int **mat, int **ax,int n_linhas, int m_colunas){

    for(int i=0; i<n_linhas; i++){
        for(int j=0; j<m_colunas; j++){
            ax[j][i]= mat[i][j];
        }
    }
    return ax;
}

int main(void) {
    //int **mat= criar_matriz();
    int **mat, **aux;
    int n_linha, m_coluna,i,j;

    printf("\nDigite o tamanho da linha da matriz:\n");
    scanf("%d",&n_linha);
    printf("Digite o o tamanho da coluna da matriz\n");
    scanf("%d",&m_coluna);

    mat = alocaMatriz(n_linha,m_coluna);
    aux = alocaMatriz(m_coluna,n_linha);

    for(int i=0; i< n_linha; i++){
        for(int j=0; j<m_coluna; j++){
            printf("\nDigite o valor da posição[%d][%d]\n", i, j);
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0; i<n_linha; i++){
        for(int j=0; j<m_coluna; j++){
            printf("\nO valor da posição na matriz[%d][%d]= %d\n", i, j, mat[i][j]);
        }
        printf("\n");
    }

    aux = matriz_transposta(mat,aux,n_linha,m_coluna);

    for(int i=0; i<m_coluna; i++){
        for(int j=0;j<n_linha ; j++){
            printf("\nO valor da posição na matriz[%d][%d]= %d\n", i, j, aux[i][j]);
        }
    }

    return 0;
}