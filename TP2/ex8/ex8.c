#include <stdio.h>
int main()
{
    int nombre;
    float racine;
    do
    {
        printf("donnez un nombre positif : ");
        scanf("%d", &nombre);
        if (nombre > 0)
        {
            racine = sqrt(nombre);
            printf("Sa racine carrée est : %f\n", racine);
        }
        else if(nombre < 0)
        {
            printf("svp positif\n");
        }
    } while (nombre != 0);
    return 0;
}