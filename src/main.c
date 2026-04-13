/* 1020 */
#include <stdio.h>

int main(void) {
  int idade_dias;
  scanf("%d", &idade_dias);

  printf("%d ano(s)\n", idade_dias / 365);
  idade_dias %= 365;

  printf("%d mes(es)\n", idade_dias / 30);
  idade_dias %= 30;

  printf("%d dia(s)\n", idade_dias);
  return 0;
}
