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

    int *pointerAges, *pointerUnderAge, *pointerOfAge;
    int indexAges, atualAge, indexUnderAge = 0, indexOfAge = 0;

    printf("Digite a quntidade de idades que serão cadastradas: ");
    scanf("%d", &indexAges);

    pointerAges = malloc(indexAges * sizeof(int));


    for (int i = 0; i < indexAges; i++) {
        printf("\nDigite a idade %d: ", i);
        scanf("%d", &atualAge);
        pointerAges[i] = atualAge;

        if (atualAge > 17) {
            indexOfAge++;
        } else {
            indexUnderAge++;
        }

    }

    pointerOfAge = malloc(indexOfAge * sizeof(int));

    pointerUnderAge = malloc(indexUnderAge * sizeof(int));


    int auxIndexOfAges = 0;
    int auxIndexUnderAge = 0;
    for (int i = 0; i < indexAges; i++) {

        if (pointerAges[i] > 17) {
            pointerOfAge[auxIndexOfAges] = pointerAges[i];
            auxIndexOfAges++;
        } else {
            pointerUnderAge[auxIndexUnderAge] = pointerAges[i];
            auxIndexUnderAge++;
        }

    }

    printf("Idades cadastradas: => ");
    showArray(indexAges, pointerAges);

    printf("\nIdades maiores que 18: => ");
    showArray(indexOfAge, pointerOfAge);

    printf("\nIdades menores que 18: => ");
    showArray(indexUnderAge, pointerUnderAge);

    free(pointerAges);
    free(pointerOfAge);
    free(pointerUnderAge);


    return 0;
}
