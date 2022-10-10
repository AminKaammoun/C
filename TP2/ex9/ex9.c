#include <stdio.h>
int main()
{
    int a, b;
    int sommeA = 1;
    int sommeB = 1;
    printf("Donner a : ");
    scanf("%d", &a);
    do
    {
        printf("Donner b : ");
        scanf("%d", &b);
    } while (a == b);
    for (int i = 2; i < a/2; i++)
    {
        if (a % i == 0)
            sommeA += i;
    }
    for (int j = 2; j < b/2; j++)
    {
        if (b % j == 0)
            sommeB += j;
    }
    if (sommeB == a && sommeA == b)

        printf("%d et %d sont des nombres amis.", a, b);
    else
        printf("%d et %d ne sont pas des nombres amis.", a, b);
    return 0;
}