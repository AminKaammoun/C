#include <stdio.h>
int main()
{
    int a = 5;
    int b = 3;
    int Resultat;
    char op ='+';
    switch(op)
    {
    case '+':
        Resultat = a + b;
        
        break;
    case '-':
        Resultat = a - b;
        
        break;
    case '*':
        Resultat = a * b;
        
        break;
    case '/':
        Resultat = a / b;
        
        break;
    default:
        printf("invalid operator");
    }
    printf("%d",Resultat);
}