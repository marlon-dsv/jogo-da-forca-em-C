# 🎮 Jogo da Forca em C

Projeto desenvolvido em **C** para a disciplina de **Algoritmos e Programação 1 – UNIVALI**.

O programa simula uma partida de **Jogo da Forca**, onde o jogador deve descobrir uma palavra relacionada à programação.

📌 **Palavra utilizada:** `WHILE`

## 📌 Funcionalidades

- Palavra escondida com `_`;
- Tentativa de letras;
- Contagem de acertos e erros;
- Limite de `6` erros;
- Histórico de letras utilizadas;
- Verificação de letras repetidas;
- Validação da entrada;
- Desenho da forca conforme os erros;
- Mensagens de acerto e erro;
- Verificação de vitória ou derrota;
- Exibição da palavra ao final da partida.

## 🛠️ Tecnologias

- C
- `stdio.h`
- `stdlib.h`
- `ctype.h`

## 🎯 Conceitos utilizados

- Variáveis;
- Vetores;
- Estruturas condicionais `if/else`;
- Estruturas de repetição `for`;
- Estrutura `do/while`;
- Estrutura `switch/case`;
- Entrada e saída de dados;
- Manipulação de caracteres;
- Contadores.

## 🎮 Exemplo do jogo

```text
--- JOGO DA FORCA ---

||----------------|
||                |
||                
||                
||                
||                
||                
||                
|| Palavra: _____
||__________________

DICA: palavra usada na programacao!

Erros: 0/6

_ _ _ _ _

Letras ja usadas:

--- Digite uma letra: ---

🔁 Letra repetida
Essa letra ja foi tentada antes!

⚠️ Entrada inválida
Digite apenas letras.

🏆 Vitória
A palavra e: W H I L E

PARABENS VOCE VENCEU!!!

💀 Derrota

--- JOGO DA FORCA ---

||----------------|
||                |
||                O
||               /|\
||               / \
||
||
||
|| Palavra: WHILE
||__________________

VOCE PERDEU!!!

A palavra era: WHILE

👨‍💻 Autor
Marlon Vritzl
