/* 1181*/
#include <stdio.h>

double soma(int linha, double matriz[12][12]) {
  double resultado = matriz[linha][0];

  for (int i = 1; i < 12; i++) {
    resultado += matriz[linha][i];
  }

  return resultado;
}

double media(int linha, double matriz[12][12]) {
  return soma(linha, matriz)/12;
}

int main(void) {
  char operacao;
  int linha;
  double matriz[12][12];

  scanf("%d %c", &linha, &operacao);

  for(int j = 0; j < 12; j++) {
    for(int i = 0; i < 12; i++) {
      scanf("%lf", &matriz[j][i]);
    }
  }

  switch(operacao) {
    case 'S':
      printf("%.1f\n", soma(linha, matriz));
    break;
    
    case 'M':
      printf("%.1f\n", media(linha, matriz)); 
    break;
    
    default: printf("Valor invalido\n");
  }

  return 0;
}
