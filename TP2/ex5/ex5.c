#include <stdio.h>
int main()
{
    double x, Resultat = 1;
    int n, absn;
    printf("Donner la valeur de x : ");
    scanf("%lf", &x);
    printf("Donner la valeur de n : ");
    scanf("%d", &n);
    absn = n > 0 ? n : -n;
    for (int i = 1; i <= absn; i++)
    {
        Resultat *= x;
    }
    if (n < 0)
        Resultat = 1 / Resultat;
    printf("Resultat est : %f", Resultat);
    return 0;
}