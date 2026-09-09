#include <stdio.h> // inclus pour printf

int somme(int a, int b) {
    return a + b;
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

    // Exercice : variable caractère et pointeur sur caractère
    char c;
    char* pc;

    pc = &c;     // faire pointer le pointeur sur la variable
    *pc = 'Z';   // initialiser la variable via le pointeur

    // Vérification : afficher la valeur de la variable
    printf("Valeur de la variable c : %c\n", c);

    return 0;
}