#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void check(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) % 2 != 0)
        {
            printf("Impair %d\n", *(ptr + i));
        }
        else
        {
            printf("Pair %d\n", *(ptr + i));
        }
    }
}

int *concat(int *tab1, int *tab2, int n1, int n2)
{
    int *tab3 = malloc(sizeof(int) * (n1 + n2));

    for (int i = 0; i <= n1; i++)
    {
        *(tab3 + i) = *(tab1 + i);
    }

    for (int i = 0; i <= n2; i++)
    {
        *(tab3 + n1 + i) = *(tab2 + i);
    }

    return tab3;
}

int main()
{

    int n = 5;

    int *tab = malloc(sizeof(int) * n); // allocation dynamique de la memoire

    srand(time(NULL));
    int r = rand() % 10;
    int r2 = rand() % 10;

    *(tab + 0) = r;
    *(tab + 1) = r2;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(tab + i));
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *(tab + i);
    }

    printf("sum : %d\n", sum);

    check(tab, n);

    int *tab3 = concat(tab, tab, n, n);

    int i = 0;

    for (int i = 0; i < 2 * n; i++) // Print all elements of tab3
    {
        printf("%d\n", *(tab3 + i));
    }

    free(tab3);

    free(tab);

    return 0;
}