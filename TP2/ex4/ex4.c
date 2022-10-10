#include <stdio.h>
int main()
{
    float somme = 0;
    int counter = 0;
    int a;
    float moyenne;
    do
    {
        printf("Donner un entier poisitf : ");
        scanf("%d", &a);
        if (a != -1)
        {
            somme += a;
            counter++;
        }
    } while (a != -1);
    if (counter != 0)
        moyenne = somme / counter;
    printf("La moyenne de ces 3 entiers vaut %f", moyenne);
    return 0;
}