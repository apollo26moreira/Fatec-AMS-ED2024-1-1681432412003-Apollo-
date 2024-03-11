#include <stdio.h>

// Função para aplicar o desconto ao preço do produto
void aplicarDesconto(float *preco, float desconto) {
  *preco = *preco - (*preco * desconto);
}

int main() {
  float preco, desconto;

  // Solicita ao usuário que insira o preço do produto
  printf("Insira o preco do produto: ");
  scanf("%f", &preco);

  // Solicita ao usuário que insira o desconto a ser aplicado
  printf("Insira o desconto a ser aplicado (em decimal, por exemplo, 0.1 para "
         "10%%): ");
  scanf("%f", &desconto);

  // Exibe o preço original
  printf("\nPreco original: R$ %.2f\n", preco);

  // Aplica o desconto
  aplicarDesconto(&preco, desconto);

  // Exibe o desconto aplicado e o preço final após o desconto
  printf("Desconto aplicado: %.2f%%\n", desconto * 100);
  printf("Preco final: R$ %.2f\n", preco);

  return 0;
}