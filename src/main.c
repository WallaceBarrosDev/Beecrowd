/* 1035 */
#include <stdio.h>

int main(void) {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  printf("%s\n", (b > c && d > a && (c+d) > (a+b) && c>=0 && d>=0 && a%2 == 0) ? "Valores aceitos" : "Valores nao aceitos");
  return 0;
}
