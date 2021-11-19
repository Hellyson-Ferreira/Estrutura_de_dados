#include <stdio.h>
#include <stdlib.h>

void showArray(int index, int array[]) {
    printf("[");
    for (int i = 0; i < index; ++i) {
        printf("%d ", array[i]);
    }
    printf("]");

}


int main() {

    int *pointAges, *pointUnderAge, *pointOfAge;
    int indexAges, atualAge, indexUnderAge = 0, indexOfAge = 0;

    printf("Digite a quntidade de idades que serão cadastradas: ");
    scanf("%d", &indexAges);

    pointAges = malloc(indexAges * sizeof(int));


    for (int i = 0; i < indexAges; i++) {
        printf("\nDigite a idade %d: ", i);
        scanf("%d", &atualAge);
        pointAges[i] = atualAge;

        if (atualAge > 17) {
            indexOfAge++;
        } else {
            indexUnderAge++;
        }

    }

    pointOfAge = malloc(indexOfAge * sizeof(int));

    pointUnderAge = malloc(indexUnderAge * sizeof(int));


    int auxIndexOfAges = 0;
    int auxIndexUnderAge = 0;
    for (int i = 0; i < indexAges; i++) {

        if (pointAges[i] > 17) {
            pointOfAge[auxIndexOfAges] = pointAges[i];
            auxIndexOfAges++;
        } else {
            pointUnderAge[auxIndexUnderAge] = pointAges[i];
            auxIndexUnderAge++;
        }

    }

    printf("Idades cadastradas: => ");
    showArray(indexAges, pointAges);

    printf("\nIdades maiores que 18: => ");
    showArray(indexOfAge, pointOfAge);

    printf("\nIdades menores que 18: => ");
    showArray(indexUnderAge, pointUnderAge);

    free(pointAges);
    free(pointOfAge);
    free(pointUnderAge);


    return 0;
}
