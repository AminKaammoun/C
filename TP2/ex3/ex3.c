#include <stdio.h>
int main()
{
    int a, b;
    int Resultat;
    printf("Donner le premier entier : ");
    scanf("%d", &a);
    printf("Donner le deuxiéme entier : ");
    scanf("%d", &b);
    for (int i = 1; i < a + b / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            Resultat = i;
        }
    }
    printf("PGCD : %d", Resultat);

    return 0;
}