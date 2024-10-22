Análise de Algoritmos de Busca
1. Busca Linear
Descrição
A busca linear percorre o array do início ao fim, verificando se o elemento alvo está presente. Ela verifica cada elemento até encontrar o alvo ou até o final do array.

Tabela de Contagem de Operações (Loop)
Tipo de Operação	Total (t)
Comparação (i < n)	n
Acesso (arr[i])	n
Comparação (arr[i] == alvo)	n
Total	3n
Análise Big O
Big O: ( O(n) )
2. Busca Linear Ordenada
Descrição
A busca linear ordenada é similar à busca linear, mas interrompe a pesquisa se encontrar um elemento maior que o alvo, aproveitando a ordenação do array. Isso pode resultar em menos iterações em comparação com a busca linear.

Tabela de Contagem de Operações (Loop)
Tipo de Operação	Total (t)
Comparação (i < n)	n
Acesso (arr[i])	2n
Comparação (arr[i] > alvo)	n
Comparação (arr[i] == alvo)	n
Total	4n
Análise Big O
Big O: ( O(n) )
3. Busca Binária
Descrição
A busca binária funciona dividindo repetidamente o array ao meio e descartando a metade onde o alvo não pode estar. Isso aproveita a ordenação do array para reduzir o número de comparações necessárias.

Tabela de Contagem de Operações (Loop)
Tipo de Operação	Total (t)
Comparação (esquerda <= direita)	k
Acesso (arr[meio])	k
Comparação (arr[meio] == alvo)	k
Comparação (arr[meio] < alvo)	k
Atribuições (esquerda/direita)	k
Total	5k
Análise Big O
Big O: ( O(\log n) )