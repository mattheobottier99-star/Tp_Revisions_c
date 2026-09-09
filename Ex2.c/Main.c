#include <stdio.h> // inclus pour printf

int main() {
    int tableau[2][10];
    int i;

    // Remplissage du tableau
    i = 0;
    while (i < 10) {
        tableau[0][i] = i;        // 1ère ligne : de 0 à 9
        tableau[1][i] = i * 3;    // 2ème ligne : le triple
        i++;
    }

    // Affichage des résultats
    printf("Ligne 1 (0 a 9) :    ");
    i = 0;
    while (i < 10) {
        printf("%d ", tableau[0][i]);
        i++;
    }

    printf("\nLigne 2 (Triples) : ");
    i = 0;
    while (i < 10) {
        printf("%d ", tableau[1][i]);
        i++;
    }
    printf("\n");

    return 0;
}
