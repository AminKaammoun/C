#include <stdio.h>
int main()
{
    float note;
    int counter = 1;
    float somme = 0;
    float moyenne;
    do
    {
        printf("note %d : ", counter);
        scanf("%f", &note);
        if (note > 0)
        {
            somme += note;
            counter++;
        }
    } while (note > 0);
    moyenne = somme / (counter - 1);
    printf("moyenne de ces %d notes : %.2f", (counter - 1), moyenne);
    return 0;
}