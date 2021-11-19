#include <stdio.h>
#include <stdlib.h>

void showArray(int index, float array[]) {
    printf("[");
    for (int i = 0; i < index; ++i) {
        printf("%.2f ", array[i]);
    }
    printf("]");

}


int main() {

    float *pointerGrades, currentGrades, average = 0;
    int indexGrade;

    printf("Digite a quntidade de notas que serão cadastradas: ");
    scanf("%d", &indexGrade);

    pointerGrades = malloc(indexGrade * sizeof(float));


    for (int i = 0; i < indexGrade; i++) {
        printf("\nDigite a nota %d: ", i);
        scanf("%f", &currentGrades);
        pointerGrades[i] = currentGrades;

        average+= currentGrades;

    }


    printf("\nAs notas são => ");
    showArray(indexGrade, pointerGrades);

    printf("\nA media das notas é %.2f", average/indexGrade);

    free(pointerGrades);



    return 0;
}
