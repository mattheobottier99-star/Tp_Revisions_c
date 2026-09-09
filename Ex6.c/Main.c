#include <stdio.h> // inclus pour printf
#include <stdlib.h> // inclus pour malloc et free

int somme(int a, int b) {
    return a + b;
}

void Produit(int a, int b, int* c) {
    if (c != NULL) {
        *c = a * b;
    }
}

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

    // Test de la fonction somme avec des constantes
    printf("Test de la fonction somme: 5 + 7 = %d\n", somme(5, 7));

    // Allocation dynamique d'1 octet via un pointeur, affectation et libération
    char* pc = malloc(sizeof * pc);
    if (pc == NULL) {
        fprintf(stderr, "Erreur : allocation memoire a echoue\n");
        return 1;
    }

    *pc = 'L'; // affecter la lettre 'L' à la mémoire allouée
    printf("Valeur stockee via malloc : %c\n", *pc);

    free(pc); // libérer la mémoire

    // Test de la fonction Produit
    int resultat = 0;
    Produit(5, 7, &resultat);
    printf("Test de la fonction Produit: 5 * 7 = %d\n", resultat);

    return 0;
}