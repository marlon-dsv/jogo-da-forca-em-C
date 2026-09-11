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

Letra correta!

_ _ _ L _

Letras ja usadas: L
```

## 🏆 Saídas esperadas

### Vitória

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

W H I L E

Letras ja usadas: W H I L E

🏆 VITORIA!

A palavra e: WHILE

PARABENS VOCE VENCEU!!!
```

### Derrota

```text
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

💀 DERROTA!

VOCE PERDEU!!!

A palavra era: WHILE
```

### Letra repetida

```text
🔁 Letra repetida

Essa letra ja foi tentada antes!
```

### Entrada inválida

```text
⚠️ Entrada invalida

Digite apenas letras.
```

## 📂 Estrutura

```text
jogo-da-forca/
├── main.c
├── README.md
└── .gitignore
```

## 🎯 Objetivo do projeto

Aplicar conceitos básicos de programação em **C**, desenvolvendo a lógica necessária para criar um jogo simples e interativo.


## 👨‍💻 Autor: Marlon Vritzl

Projeto acadêmico desenvolvido para a disciplina de **Algoritmos e Programação 1 – UNIVALI**.
