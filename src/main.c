#include <stdio.h>

int main(void) {
  int tempo, h, m, s;
  scanf("%d", &tempo);

  h = tempo / 3600;
  tempo %= 3600;
  m = tempo / 60;
  s = tempo % 60;

  printf("%d:%d:%d\n", h, m, s);
  
  return 0;
}
