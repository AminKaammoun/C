#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Donner la valeur 1 : ");
    scanf("%d", &a);
    printf("Donner la valeur 2 : ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("la valeur 1 est : %d\n",a);
    printf("la valeur 2 est : %d",b);
}