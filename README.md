# Simulação de Movimentos de Peças de Xadrez

## Descrição

Este programa simula os movimentos básicos de quatro peças de xadrez: Torre, Bispo, Rainha e Cavalo. O projeto demonstra diferentes técnicas de programação em C, incluindo recursividade, loops aninhados e estruturas de controle de fluxo complexas.

## Características

O programa implementa:

1. **Torre**: Movimento de 5 casas para a direita, implementado com função recursiva
2. **Bispo**: Movimento de 5 casas na diagonal (cima e direita), implementado tanto com recursividade quanto com loops aninhados
3. **Rainha**: Movimento de 8 casas para a esquerda, implementado com função recursiva
4. **Cavalo**: Movimento em "L" (2 casas para cima e 1 casa para a direita), implementado com loops aninhados complexos

## Estrutura do Código

O código está organizado da seguinte forma:

- **Protótipos de Funções**: Declarados no início do programa
- **Main**: Contém as definições de constantes e chamadas às funções de movimento
- **Funções Recursivas**: Implementações para a Torre, Bispo e Rainha
- **Função com Loops Aninhados**: Implementação alternativa para o Bispo

## Técnicas de Programação Demonstradas

### Recursividade
Cada função recursiva possui:
- Um caso base para encerrar a recursão
- Uma ação a ser executada em cada chamada
- Uma chamada recursiva com o parâmetro decrementado

### Loops Aninhados
- Loops simples para situações básicas
- Loops complexos com múltiplas variáveis de controle para o Cavalo
- Estruturas de controle (continue, break) para gerenciar o fluxo de execução

### Boas Práticas
- Código bem documentado com comentários explicativos
- Uso de constantes para valores fixos
- Organização lógica e modular
- Nomes de variáveis descritivos


## Saída Esperada

O programa exibirá a sequência de movimentos para cada peça:

1. Torre: 5 movimentos para a direita
2. Bispo (recursivo): 5 movimentos diagonais (cima e direita)
3. Rainha: 8 movimentos para a esquerda
4. Cavalo: Movimento em "L" (2 para cima, 1 para a direita)
5. Bispo (loops): 5 movimentos diagonais (cima e direita)

Cada movimento é representado por uma direção impressa no console (ex: "Direita", "Cima, Direita", "Esquerda").


## Limitações e Simplificações

- O programa não verifica a validade dos movimentos em um tabuleiro real de xadrez
- Não há interface gráfica, todos os movimentos são representados como texto no console
- Não existe validação de entrada do usuário, pois todos os valores são definidos diretamente no código

## Expansões Possíveis

- Adicionar representação visual do tabuleiro
- Implementar validação de movimentos conforme regras oficiais do xadrez
- Permitir entrada do usuário para escolha de movimentos
- Adicionar mais peças (Rei, Peão)
- Criar um jogo completo de xadrez

