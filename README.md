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
---

## ♟️ Nível Mestre – Movimentos Complexos

### Descrição

No **Nível Mestre**, o projeto foi aprimorado com técnicas avançadas de programação em C,
explorando **recursividade** e **loops complexos** para simular os movimentos das peças
do jogo de xadrez.

As peças Torre, Bispo e Rainha foram implementadas utilizando **funções recursivas**,
substituindo os loops simples utilizados nos níveis anteriores.

O Cavalo foi implementado com **loops aninhados complexos**, utilizando múltiplas variáveis
e controle de fluxo com `break` e `continue`, simulando corretamente o movimento em “L”.

---

### Peças e Técnicas Utilizadas

- **Torre**
  - Movimento horizontal
  - Implementação com **recursividade**

- **Rainha**
  - Movimento horizontal
  - Implementação com **recursividade**

- **Bispo**
  - Movimento diagonal
  - **Recursividade combinada com loops aninhados**
  - Loop externo: movimento vertical  
  - Loop interno: movimento horizontal

- **Cavalo**
  - Movimento em “L” (duas casas para cima e uma para a direita)
  - Implementação com **loops aninhados complexos**
  - Uso de `break` e `continue`

---

### Arquivo do Nível Mestre

O código do nível mestre está disponível no arquivo:




