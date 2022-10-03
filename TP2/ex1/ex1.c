#include <stdio.h>

int main()
{
    int i = 0, n, som;
    while (i < 4)
    {
        i++;
        printf("donnez un entier ");
        scanf("%d", &n);
        som += n;
    }
    printf("Somme : %d\n", som);
}