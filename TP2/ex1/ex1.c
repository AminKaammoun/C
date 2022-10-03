#include <stdio.h>

int main()
{
    int i = 0, n, som = 0;
    while (i++ < 4)
    {
       
        printf("donnez un entier ");
        scanf("%d", &n);
        som += n;
       
    }
    printf("Somme : %d\n", som);
}