import random
from typing import List, Dict, Tuple

# Simulador de coleta de dados de tráfego
def coletar_dados_trafego() -> Dict[str, int]:
    """Coleta dados de tráfego aleatórios para diferentes rotas."""
    rotas = ['A', 'B', 'C', 'D']
    dados_trafego = {rota: random.randint(5, 20) for rota in rotas}  # Tempo de tráfego em minutos
    print("Dados de Tráfego Coletados:", dados_trafego)
    return dados_trafego

# Cálculo de rotas ótimas usando um algoritmo simples
def calcular_rotas_otimas(dados_trafego: Dict[str, int], rotas: List[str], melhor_rota: str = "", melhor_tempo: int = float('inf')) -> str:
    """Calcula a melhor rota com base nos dados de tráfego."""
    if not rotas:
        return melhor_rota

    rota_atual = rotas[0]
    tempo_atual = dados_trafego[rota_atual]

    if tempo_atual < melhor_tempo:
        melhor_rota = rota_atual
        melhor_tempo = tempo_atual

    # Chamada recursiva
    return calcular_rotas_otimas(dados_trafego, rotas[1:], melhor_rota, melhor_tempo)

# Alocação de motoristas
def alocar_motoristas(rotas: List[str], motoristas: List[str], alocacao: Dict[str, str] = {}) -> Dict[str, str]:
    """Aloca motoristas para rotas."""
    if not rotas or not motoristas:
        return alocacao

    rota_atual = rotas[0]
    motorista_atual = motoristas[0]

    # Aloca o motorista para a rota atual
    alocacao[rota_atual] = motorista_atual
    print(f"Motorista {motorista_atual} alocado para a rota {rota_atual}.")

    # Chamada recursiva para a próxima alocação
    return alocar_motoristas(rotas[1:], motoristas[1:], alocacao)

# Função principal para otimização de rotas de entrega
def otimizar_rotas_entrega(motoristas: List[str]) -> None:
    """Coordena o processo de otimização de rotas de entrega."""
    dados_trafego = coletar_dados_trafego()
    rotas = list(dados_trafego.keys())

    # Calcula a melhor rota
    melhor_rota = calcular_rotas_otimas(dados_trafego, rotas)
    print(f"A melhor rota é: {melhor_rota}")

    # Aloca motoristas
    alocacao = alocar_motoristas(rotas, motoristas)
    print("Alocação de motoristas concluída:", alocacao)

# Exemplo de uso
motoristas_disponiveis = ['Motorista 1', 'Motorista 2', 'Motorista 3', 'Motorista 4']
otimizar_rotas_entrega(motoristas_disponiveis)