/* 1182*/
#include <stdio.h>

double soma(int coluna, double matriz[12][12]) {
  double resultado = matriz[0][coluna];

  for (int i = 1; i < 12; i++) {
    resultado += matriz[i][coluna];
  }

  return resultado;
}

double media(int coluna, double matriz[12][12]) {
  return soma(coluna, matriz)/12;
}

int main(void) {
  char operacao;
  int coluna;
  double matriz[12][12];

  scanf("%d %c", &coluna, &operacao);

  for(int j = 0; j < 12; j++) {
    for(int i = 0; i < 12; i++) {
      scanf("%lf", &matriz[j][i]);
    }
  }

  switch(operacao) {
    case 'S':
      printf("%.1f\n", soma(coluna, matriz));
    break;
    
    case 'M':
      printf("%.1f\n", media(coluna, matriz)); 
    break;
    
    default: printf("Valor invalido\n");
  }

  return 0;
}
