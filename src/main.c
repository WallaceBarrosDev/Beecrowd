#include <stdio.h>

int main(void) {
  int tempo, velocidadeMedia;
  double gastoTotal;
  scanf("%i %i", &tempo, &velocidadeMedia);
  printf("%.3lf\n", (tempo * velocidadeMedia / 12.0));
  return 0;
}
