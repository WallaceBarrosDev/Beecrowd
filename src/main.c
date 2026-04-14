/* 1036 */
#include <stdio.h>
#include <math.h>

int main(void) {
  double a, b, c, delta, raiz, r1, r2;
  scanf("%lf %lf %lf", &a, &b, &c);

  delta = b*b - 4*a*c;
  
  if(delta < 0 || a == 0) {
    printf("Impossivel calcular\n");
    return 0;
  }
  
  raiz = sqrt(delta);

  if(raiz == 0) {
    r1 = (-1*b)/(2*a);
    r1 = r2;
  } else {
    r1 = (-1*b+raiz)/(2*a);
    r2 = (-1*b-raiz)/(2*a);
  }
  
  printf("R1 = %.5f\n", r1);
  printf("R2 = %.5f\n", r2);

  return 0;
}
