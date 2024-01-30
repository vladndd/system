// TP-2: Variables

#include <stdio.h>

int main()
{
    int number = 5; // Déclaration et initialisation d'une variable entière

    printf("%d\n", number);

    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        { // Vérifie si le nombre est impair
            printf("%d\n", i);
        }
    }

    // Affiche la valeur de la variable
    return 0;
}
