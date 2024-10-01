import itertools

# Matriz de distâncias entre os pontos (A, B, C, D)
distancias = [
    [0, 10, 15, 20],
    [10, 0, 35, 25],
    [15, 35, 0, 30],
    [20, 25, 30, 0]
]

# Nomes dos pontos
pontos = ["A", "B", "C", "D"]

def calcular_distancia(rota):
    total = 0
    for i in range(len(rota) - 1):
        total += distancias[rota[i]][rota[i + 1]]
    total += distancias[rota[-1]][rota[0]]  # Retorna ao ponto de partida
    return total

def melhor_rota():
    melhor_distancia = float('inf')
    melhor_caminho = None
    
    # Loop para escolher o primeiro ponto
    for i in range(len(pontos)):
        # Loop para escolher o segundo ponto
        for j in range(len(pontos)):
            if j == i:  # Ignora o mesmo ponto
                continue
            
            # Loop para escolher o terceiro ponto
            for k in range(len(pontos)):
                if k == i or k == j:  # Ignora pontos já escolhidos
                    continue
                
                rota = [i, j, k]  # Cria a rota
                distancia_atual = calcular_distancia(rota)

                # Atualiza a melhor rota se a atual for menor
                if distancia_atual < melhor_distancia:
                    melhor_distancia = distancia_atual
                    melhor_caminho = rota

    return melhor_caminho, melhor_distancia

# Executando a função
caminho, distancia = melhor_rota()
caminho_nomes = [pontos[i] for i in caminho]
print(f"A melhor rota é: {' -> '.join(caminho_nomes)} com distância total de {distancia}")