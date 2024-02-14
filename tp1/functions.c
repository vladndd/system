// TP-3 : Fonctions

#include <stdio.h>

// l'utilisation des fonctions permet d'avoir le code mieux structuré et plus lisible et en plus ca minimise la redondance du code

// l'utilisation des pointeurs permet la manipulation de la memoire donc on peut modifier la valeur d'une variable dans une fonction

int somme(int a, int b)
{                 // Définition de la fonction somme
    return a + b; // Retourne la somme des deux entiers
}

void changeValue(int *b)
{           // Définition de la fonction changeValue
    *b = 5; // Change la valeur de la variable pointée par a
}

int main()
{
    int resultat = somme(5, 3); // Utilisation de la fonction somme qui prends deux entiers en paramètres
    int b = 2;
    changeValue(&b); // Utilisation de la fonction changeValue qui prend un pointeur en paramètre
    printf("b : %d\n", b);
    printf("Somme : %d\n", resultat);
    return 0;
}
