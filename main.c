#include <stdio.h>
#include <stdlib.h>
#include "libry.h"

int main() {
    //  Exercice 1
    printf("Exercice 1\n");
    afficherBonjour();

    //  Exercice 2
    printf("Exercice 2\n");
    int nombre;
    printf("Entrer un nombre entier a trois chiffres");
    scanf("%d", &nombre);
    printf("Inversion de %d : %d\n", nombre, inverserEntier(nombre));

    // Exercice 3
    printf("Exercice 3\n");
    float a, b;
    printf("Entrer le premier nombre reel");
    scanf("%f", &a);
    printf("Entrer le deuxieme nombre reel");
    scanf("%f", &b);
    printf("Produit de %.3f et %.3f : %.3f\n", a, b, produitDeuxReels(a, b));

    // Exercice 4
    printf("Exercice 4\n");
    int entier;
    printf("Entrer un nombre entier");
    scanf("%d", &entier);
    printf("%d est %s\n", entier, estPair(entier) ? "pair" : "impair");

    // Exercice 5
    printf("Exercice 5\n");
    int x, y;
    printf("Entrer le nombre a");
    scanf("%d", &x);
    printf("Entrer le nombre b");
    scanf("%d", &y);
    printf("Comparaison entre %d et %d : %s\n", x, y, comparerEntiers(x, y));

    //  Exercice 6
    printf("Exercice 6\n");

    int n1,n2,n3;
    printf("Entrer le premier nombre");
    scanf("%d", &n1);
    printf("Entrer le deuxieme nombre ");
    scanf("%d", &n2);
    printf("Entrer le troisieme nombre ");
    scanf("%d", &n3);
    trierTroisEntiers(&n1, &n2, &n3);
    printf("Entiers triés : %d, %d, %d\n", n1, n2, n3);

    //Exercice 7
    printf("Exercice 7\n");
    devinerNombre();

    // Exercice 16: Permutation de deux caractères
    printf("Exercice 16\n");
    char x1,y1;
    printf("Entrer le premier caractere:");
    scanf(" %c", &x1);
    printf("Entrer le deuxieme caractere:");
    scanf(" %c", &y1);
    printf("Avant permutation: x1 = %c, y1 = %c\n", x1, y1);
    permuterChar(&x1, &y1);
    printf("Après permutation: x1 = %c, y1 = %c\n", x1, y1);

    // Exercice 17: Somme de deux entiers
    printf("Exercice 17\n");
    int a1, b1;
    printf("Entrer le premier nombre");
    scanf("%d", &a1);
    printf("Entrer le deuxieme nombre ");
    scanf("%d", &b1);
    printf("Somme de %d et %d = %d\n", a1, b1, somme(a1, b1));

    return 0;
}
