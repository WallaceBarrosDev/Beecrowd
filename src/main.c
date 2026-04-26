// 1184
#include <stdio.h>

void preencher(double matriz[12][12]);
double somar_elementos(double matriz[12][12]);
double media_elementos(double matriz[12][12]);

int main(void) {
  char option;
  double matriz[12][12];

  scanf("%c", &option);
  preencher(matriz);
  if(option == 'S') {
    printf("%.1f\n", somar_elementos(matriz));
  }

  if (option == 'M') {
    printf("%.1f\n", media_elementos(matriz));
  }

  return 0;
}

double media_elementos(double matriz[12][12]) {
  return somar_elementos(matriz)/66;
}

double somar_elementos(double matriz[12][12]) {
  double soma_elements = 0.0;
  for (int j = 0; j < 12; j++) {
    for (int i = 0; i < j; i++) {
      soma_elements += matriz[j][i];
    }
  }
  return soma_elements;
}

void preencher(double matriz[12][12]) {
  for(int j = 0; j < 12; j++) {
    for(int i = 0; i < 12; i++) {
      scanf("%lf", &matriz[j][i]);
    }
  }
}
