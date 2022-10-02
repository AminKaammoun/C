#include <stdio.h>

int main() {

  int n, inverse = 0, calcul;

  printf("Donner le nombre n : ");
  scanf("%d", &n);

  while (n != 0) {
    calcul = n % 10;
    inverse = inverse * 10 + calcul;
    n /= 10;
  }

  printf("Resultat = %d", inverse);

  return 0;
}