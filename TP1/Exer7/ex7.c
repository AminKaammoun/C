#include <stdio.h>

void main()
{
    int sec;
    printf("Donner le nombre de seconds: ");
    scanf("%d", &sec);
    int h = sec / 3600;
    int m = (sec % 3600) / 60;
    int s = (sec % 3600) % 60;
    printf("%ds = %dh : %dM : %ds", sec, h, m, s);
}