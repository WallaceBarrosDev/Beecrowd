#include <stdio.h>
#include <math.h>

double quadrado(double x);

int main(void) {
  double x1, y1, x2, y2, distancia;

  scanf("%lf %lf", &x1, &y1);
  scanf("%lf %lf", &x2, &y2);

  distancia = sqrt(quadrado(x2 - x1) + quadrado(y2 - y1));

  printf("%.4lf\n", distancia);

  return 0;
}

double quadrado(double x) {
  return x*x;
}
