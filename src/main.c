#include <stdio.h>

int main(void) {
  int a, b, c, maior;

  scanf("%i %i %i", &a, &b, &c);

  maior = (a > b) ? a : b;
  maior = (maior > c) ? maior : c;

  printf("%i eh o maior\n", maior);

  return 0;
}
