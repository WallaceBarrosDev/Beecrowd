/* 1180 */
#include <stdio.h>

int main(void) {
  int tamanho_array, posicao, menor_valor;
  scanf("%d", &tamanho_array);
  int array[tamanho_array];

  for(int i = 0; i < tamanho_array; i++) {
    scanf("%d", &array[i]);
    if(i == 0) {
      menor_valor = array[i];
    } 

    if(array[i] <= menor_valor) {
      menor_valor = array[i];
      posicao = i;
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", menor_valor, posicao);

  return 0;
}
