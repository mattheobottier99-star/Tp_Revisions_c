#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int v;

    printf("Saisir un nombre entier : ");
    if (scanf_s("%d", &v) != 1) {
        fprintf(stderr, "Entrée non valide.\n");
        return 1;
    }

    if (v == INT_MIN) {
        long long abs_v = -(long long)v;
        printf("%lld\n", abs_v); //ghjgjgjdsdsdsds
    }
    else {
        printf("%d\n", (v >= 0) ? v : -v);
    }

    return 0;
}