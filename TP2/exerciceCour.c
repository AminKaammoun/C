#include <stdio.h>

int main()
{
    int a, b, c, max = 0;
    printf("Donner le premier entier : ");
    scanf("%d", &a);
    printf("Donner le deuxieme entier : ");
    scanf("%d", &b);
    printf("Donner le troisiéme entier : ");
    scanf("%d", &c);

    if (a > max)
    {
        max = a;
    }
    else if (b > max)
    {
        max = b;
    }
    else if (c > max)
    {
        max = c;
    }
}