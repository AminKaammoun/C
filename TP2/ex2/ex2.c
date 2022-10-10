
// part1
/*#include <stdio.h>
int main()
{
    int n;
    int counter;
    printf("Donner un nombre : ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            counter++;
        }
    }
    if (counter > 0)
    {
        printf("%d n'est pas nombre premier", n);
    }
    else
    {
        printf("%d est un nombre premier", n);
    }
}*/

// part2

#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    int num = 1;
    do
    {
        printf("Donnez un nombre n : ");
        scanf("%d", &n);
    } while (n < 10);
    while (i != n)
    {
        int counter = 0;
        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                counter++;
                
            }
        }
        if(counter == 0)
        {
            printf("%d ", num);
            i++;
        }
        num++;
    }
}