\# Movimentação das Peças de Xadrez – Nível Novato



\## Descrição

Projeto desenvolvido em linguagem \*\*C\*\* como parte do \*\*Desafio Nível Novato\*\* da disciplina

\*\*Introdução à Programação de Computadores\*\*.



O objetivo é simular a movimentação de peças do xadrez utilizando \*\*estruturas de repetição\*\*.



\---



\## Peças Simuladas



\### ♜ Torre

\- Movimento: 5 casas para a \*\*direita\*\*

\- Estrutura utilizada: `for`



\### ♝ Bispo

\- Movimento: 5 casas na \*\*diagonal (cima e direita)\*\*

\- Estrutura utilizada: `while`



\### ♛ Rainha

\- Movimento: 8 casas para a \*\*esquerda\*\*

\- Estrutura utilizada: `do-while`



\---



\## Estruturas de Repetição Utilizadas

\- `for`

\- `while`

\- `do-while`



Cada peça utiliza uma estrutura diferente, conforme solicitado no desafio.



\---



\## Como Compilar e Executar



\### Compilação

```bash

gcc xadrez.c -o xadrez

## 🐴 Nível Aventureiro – Movimento do Cavalo

Neste nível foi implementado o movimento do **Cavalo no xadrez**, que se desloca em formato de **"L"**.

### Movimento implementado
- Duas casas para **baixo**
- Uma casa para a **esquerda**

### Conceitos aplicados
- Uso de **loops aninhados**
- Loop `for` para o movimento principal
- Loop `while` ou `do-while` para o movimento perpendicular
- Impressão passo a passo do movimento:


