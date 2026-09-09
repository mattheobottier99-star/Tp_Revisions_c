#include <stdio.h>

int mainB() {
    int n;
    int cpt = 0;
    int resultat = 1;

    printf("Saisir un nombre entier : ");
    if (scanf_s("%d", &n) != 1) {
        fprintf(stderr, "Erreur de saisie\n");
        return 1;
    }

    if (n < 0) {
        printf("Le nombre saisi n'est pas valide\n");
    }
    else {
        while (n > 0) {
            resultat = resultat * n;
            n--;
        }
        printf("%d\n", resultat);
    }

    return 0;
}