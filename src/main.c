/* 1021 */
#include <stdio.h>

int main(void) {
  double input;
  scanf("%lf", &input);
  int numero = input * 100;

  printf("NOTAS:\n");
  printf("%i nota(s) de R$ 100.00\n", numero / 10000);
  numero %= 10000;

  printf("%i nota(s) de R$ 50.00\n", numero / 5000);
  numero %= 5000;

  printf("%i nota(s) de R$ 20.00\n", numero / 2000);
  numero %= 2000;

  printf("%i nota(s) de R$ 10.00\n", numero / 1000);
  numero %= 1000;
  
  printf("%i nota(s) de R$ 5.00\n", numero / 500);
  numero %= 500;

  printf("%i nota(s) de R$ 2.00\n", numero / 200);
  numero %= 200;

  printf("MOEDAS:\n");

  printf("%i moeda(s) de R$ 1.00\n", numero / 100);
  numero %= 100;

  printf("%i moeda(s) de R$ 0.50\n", numero / 50);
  numero %= 50;
  
  printf("%i moeda(s) de R$ 0.25\n", numero / 25);
  numero %= 25;

  printf("%i moeda(s) de R$ 0.10\n", numero / 10);
  numero %= 10;

  printf("%i moeda(s) de R$ 0.05\n", numero / 5);
  numero %= 5;

  printf("%i moeda(s) de R$ 0.01\n", numero / 1);
  numero %= 1;

  return 0;
}
