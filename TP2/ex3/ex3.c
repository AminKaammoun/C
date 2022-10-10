#include <stdio.h>
int main()
{
    /*int a, b;
    int pgcd = 1;
    printf("Donner le premier entier : ");
    scanf("%d", &a);
    printf("Donner le deuxiéme entier : ");
    scanf("%d", &b);
    for (int i = 2; i <= a && i <= b / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            pgcd = i;
        }
    }
    printf("PGCD : %d", pgcd);

    return 0;
    */
    int a, b;
    int i;
    int min = a < b ? a : b;
    i = min;
    int pgcd;
    printf("Donner le premier entier : ");
    scanf("%d", &a);
    printf("Donner le deuxiéme entier : ");
    scanf("%d", &b);
    while (i != 1)
    {
        if (a % i == 0 && b % i == 0)
        {
            break;
        }
        else
        {
            i--;
        }
    }
    pgcd = i;
    printf("PGCD : %d", pgcd);
    return 0;
}