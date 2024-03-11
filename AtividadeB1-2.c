#include <stdio.h>

void aplicarDesconto(float *preco, float desconto) {
  *preco = *preco - (*preco * desconto);
}

int main() {
  float preco, desconto;

  printf("Insira o preco do produto: ");
  scanf("%f", &preco);

  printf("Insira o desconto a ser aplicado (em decimal, por exemplo, 0.1 para "
         "10%%): ");
  scanf("%f", &desconto);

  printf("\nPreco original: R$ %.2f\n", preco);

  aplicarDesconto(&preco, desconto);

  printf("Desconto aplicado: %.2f%%\n", desconto * 100);
  printf("Preco final: R$ %.2f\n", preco);

  return 0;
}