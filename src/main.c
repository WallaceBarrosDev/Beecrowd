/* 1183*/
#include <stdio.h>

double soma(double matriz[12][12]) {
  /*for() {

  }*/

  return 0.0;
}

double media(double matriz[12][12]) {
  return soma(matriz)/12;
}

int main(void) {
  char operacao;
  double matriz[12][12];

  scanf("%c", &operacao);

  for(int j = 0; j < 12; j++) {
    for(int i = 0; i < 12; i++) {
      scanf("%lf", &matriz[j][i]);
    }
  }

  switch(operacao) {
    case 'S':
      printf("%.1f\n", soma(matriz));
    break;
    
    case 'M':
      printf("%.1f\n", media(matriz)); 
    break;
    
    default: printf("Valor invalido\n");
  }

  return 0;
}
