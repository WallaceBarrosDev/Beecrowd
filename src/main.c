/* 1074 */
#include <stdio.h>

int main(void) {
  int N, n;

  for(scanf("%d", &N); N > 0; N--) {
    scanf("%d", &n);

    if(n == 0) {
      printf("NULL\n");
      continue;
    }
    
    printf("%s %s\n", (n % 2 == 0) ? "EVEN" : "ODD", (n >= 0) ? "POSITIVE" : "NEGATIVE");
  }

  return 0;
}
