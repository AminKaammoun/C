#include <stdio.h>
int main()
{
    double x,Resultat = 1;
    int n ;
    printf("Donner la valeur de x : ");
    scanf("%lf", &x);
    printf("Donner la valeur de n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        Resultat *= x;
    }
    printf("Resultat est : %f",Resultat);
    return 0;
}