#include <stdio.h>
int main()
{ /*
     int n;
     int nombre;
     int counter =0;
     int i = 1;
     do
     {
         printf("Donner n : ");
         scanf("%d", &n);
     } while (n < 0);
     nombre = n;
     while (nombre > i)
     {
         nombre -= i;
         counter++;
         i += 2;
     }
     printf("la racine carrée entiére de %d est %d",n,counter);
     */
    float a, Un = 1, Un_1;
    do
    {
        printf("donner a : ");
        scanf("%f", &a);
    } while (a <= 0);
    Un_1 = (Un + (a / Un)) / 2;
    while (Un_1 - Un > 1e-3)
    {
        Un = Un_1;
        Un_1 = (Un + a / Un) / 2;
    }
    printf("La racine carrée de %.2f est %.2f", a, Un_1);
    return 0;
}