# Jogo da Forca em C

## Sobre o Projeto

Implementação do clássico **Jogo da Forca** utilizando a linguagem C, desenvolvida para a disciplina de Algoritmos e Programação da Universidade do Vale do Itajaí (UNIVALI).

O jogo é executado inteiramente no terminal e permite que o jogador descubra uma palavra secreta por meio de tentativas de letras, respeitando um limite de erros. O projeto explora o uso de vetores, estruturas de repetição, estruturas condicionais e validação de entradas.

## Funcionalidades

- Exibição da palavra secreta de forma mascarada.
- Tentativas de descoberta da palavra por meio de letras.
- Registro do histórico de letras utilizadas.
- Desenho da forca em ASCII Art, atualizado conforme os erros.
- Reconhecimento de letras maiúsculas e minúsculas.
- Exibição do progresso da partida a cada rodada.
- Controle do número de erros e tentativas.
- Identificação das condições de vitória e derrota.
- Organização da interface textual durante a execução.

## Mecânica do Jogo

O jogador deve informar uma letra por tentativa para descobrir a palavra secreta. Quando a letra escolhida pertence à palavra, sua posição é revelada na máscara de exibição. Quando não pertence, o contador de erros é atualizado e uma nova parte do desenho da forca é apresentada.

A partida termina quando o jogador descobre todas as letras da palavra ou atinge o limite de erros definido pelo programa.

## Conceitos de Programação Aplicados

- **Constantes:** definição dos limites de tentativas e dos tamanhos dos vetores.
- **Variáveis e tipos de dados:** utilização de tipos como `int`, `char` e `bool`, conforme a implementação.
- **Vetores unidimensionais:** armazenamento da palavra secreta, da máscara de exibição e do histórico de letras tentadas.
- **Estruturas de repetição:** controle das rodadas e verificação dos caracteres.
- **Estruturas condicionais:** análise dos acertos, erros e condições de encerramento.
- **Seleção múltipla (`switch`):** aplicação da estrutura exigida na especificação acadêmica.
- **Validação de entradas:** tratamento das letras informadas pelo jogador.
- **Controle de índices:** acesso seguro às posições dos vetores.

## Tecnologias

- **Linguagem:** C
- **Execução:** Terminal/console
- **Interface:** ASCII Art e caracteres textuais.

## Objetivo Acadêmico

Consolidar os fundamentos da programação estruturada por meio do desenvolvimento de um jogo interativo, aplicando estruturas de dados unidimensionais, controle de fluxo e validação de entradas.

## Instituição

Universidade do Vale do Itajaí (UNIVALI)  
Disciplina: Algoritmos e Programação

