#include <stdio.h>

#define TAM_ARRAY 5

int encontrarMaiorElemento(int * array){
  int maior = * array;

  for (int i = 1; i < TAM_ARRAY; i++){
    if (*(array + i ) > maior ) {
      maior = * (array + i);
    }
  }
  return maior;
}

  int calcularSoma(int * array){
    int soma = 0;
    for (int i = 0; i < TAM_ARRAY; i++){
      soma += * (array + i); 
    }
    return soma;
  }

void imprimirArray(int * array){
  printf("Array: ");
  for (int i = 0; i < TAM_ARRAY; i++){
    printf("%d", * (array + i));
  }
  printf("\n");
}

void modificarArray(int * array, int multiplicador){
  for (int i = 0; i < TAM_ARRAY; i++) {
    * (array + i) *= multiplicador; 
  }
}

int main() {
  int notas [TAM_ARRAY];

  printf("Digite as cinco notas \n");
  for (int i = 0; i < TAM_ARRAY; i++){
    scanf("%d", &notas[i]);
  }
  for(int i = 0; i < TAM_ARRAY - 1; i++) {
    for(int j = 0; j < TAM_ARRAY - i - 1; j++ ){
      if (notas [j] > notas[j + 1]) {
        int temp = notas[j];
        notas [j] = notas [j + 1];
        notas [j + 1] = temp;
      }
    }
  }
  printf("Maior elemento: %d\n", encontrarMaiorElemento(notas));
  printf("Soma dos elementos: %d\n", calcularSoma(notas));
  imprimirArray(notas);

  int multiplicador;
  printf("Digite o valor pelo qual deseja multiplicar os elementos do array: ");
  scanf("%d", &multiplicador);
  modificarArray(notas, multiplicador);
  imprimirArray(notas);
  return 0;
}