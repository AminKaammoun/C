#include <stdio.h>
int main()
{
    int n;
    int U_2 = 1;
    int U_1 = 1;
    int Un = 0;
    printf("Donner un entier : ");
    scanf("%d", &n);
    for (int i = 3; i <= n; i++)
    {
        Un = U_1 + U_2;
        U_2 = U_1;
        U_1 = Un;
    }
    printf("%d",Un);
    return 0;
}