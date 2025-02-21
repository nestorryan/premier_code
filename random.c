#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Générer un nombre aléatoire entre 1 et 10
    int nombre = (rand() % 10) + 1;

    // Afficher le nombre généré
    printf("Nombre aléatoire: %d\n", nombre);

    return 0;
}