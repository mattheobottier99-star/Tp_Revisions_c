#include <stdio.h> // inclus pour printf

int main() {
    int tableau[2][10];
    int i;

    // Remplissage du tableau
    for (i = 0; i < 10; i++) {
        tableau[0][i] = i;        // 1ère ligne : de 0 à 9
        tableau[1][i] = i * 3;    // 2ème ligne : le triple
    }

    // Affichage des résultats
    printf("Ligne 1 (0 a 9) :    ");
    for (i = 0; i < 10; i++) {
        printf("%d ", tableau[0][i]);
    }

    printf("\nLigne 2 (Triples) : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", tableau[1][i]);
    }
    printf("\n");

    return 0;
}