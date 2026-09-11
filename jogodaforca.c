#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define tam 5
#define tentativas 26

int main() {

    char palavra[tam] = {'W', 'H', 'I', 'L', 'E'};
    char palavramascarada[tam] = {'_', '_', '_', '_', '_'};
    char letra;
    int acertos = 0, erros = 0;
    char historico[tentativas];
    int letrastentadas = 0, letrasencontradas = 0, letrarepetida = 0;
    int mensagem = 0;

    do {

        system("cls");

        printf("\n--- JOGO DA FORCA ---\n");

        printf(
            "||----------------|\n"
            "||                |\n"
            "||                %c\n"
            "||               %c%c%c\n"
            "||               %c %c\n"
            "||                  \n"
            "||                  \n"
            "||                  \n",

            (erros >= 1 ? 'O' : ' '),
            (erros >= 3 ? '/' : ' '),
            (erros >= 2 ? '|' : ' '),
            (erros >= 4 ? '\\' : ' '),
            (erros >= 5 ? '/' : ' '),
            (erros >= 6 ? '\\' : ' ')

        );
        printf("|| Palavra: ");

        for (int i = 0; i < tam; i++) {
            printf("%c", palavramascarada[i]);
        }

        printf("\n");
        printf("||__________________\n\n");

        switch (mensagem) {
        
            case 1: 
                printf("Voce acertou uma letra!!!\n");
                break;
        
            case 2:
                printf("Voce errou!!!\n");
                break;

            case 3: 
                printf("Essa letra ja foi tentada antes!\n");
                break;

            case 4:
                printf("Digite apenas letras.\n");
                break;

            default:
                break;
        }

        printf("\nDICA: palavra usada na programacao!\n\n");

        printf("Palavra: ");

        printf("Erros: %d/6\n", erros);

        for (int i = 0; i < tam; i++) {
            printf("%c ", palavramascarada[i]);
        }

        printf("\nLetras ja usadas: ");

        for (int i = 0; i < letrastentadas; i++) {
            printf("%c ", historico[i]);
        }

        printf("\n\n--- Digite uma letra: ---\n");
        scanf(" %c", &letra);

        printf("\n");

        letrasencontradas = 0;
        letrarepetida = 0;

        if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) {

            letra = toupper(letra);

            for(int i = 0; i < letrastentadas; i++) {

                if(letra == historico[i]) {
                    letrarepetida = 1;
                    break;
                }
            }

            if(letrarepetida == 0) {

                if (letrastentadas < tentativas) {
                    historico[letrastentadas] = letra;
                    letrastentadas++;
                }

                for (int i = 0; i < tam; i++) {

                    if (letra == palavra[i]) {
                        letrasencontradas = 1;
                        if (palavramascarada[i] == '_') {
                            acertos++;
                        }
                        palavramascarada[i] = palavra[i];
                    }
                }

                if (letrasencontradas == 1) {
                    mensagem = 1;
                }
                else {
                    erros++;
                    mensagem = 2;
                }
            }
            else {
                mensagem = 3;
            }

        }
        else {
            mensagem = 4;
        }

    } while (acertos < tam && erros < 6);

    system("cls");

    if (acertos == tam) {

        printf("\nA palavra e: ");

        for(int i = 0; i < tam; i++) {
            printf("%c ", palavramascarada[i]);
        }

        printf("\n\nPARABENS VOCE VENCEU!!!");
    }
    else {

        for (int i = 0; i < 50; i++) {
        printf("\n");
    }  

        printf("\n--- JOGO DA FORCA ---\n");

        printf(
            "||----------------| \n"
            "||                | \n"
            "||                O \n"
            "||               /|\\\n"
            "||               / \\\n"
            "||                  \n"
            "||                  \n"
            "||                  \n"
            "|| Palavra: "
        );

        for (int i = 0; i < tam; i++) {
            printf("%c", palavra[i]);
        }

        printf("\n||__________________\n");

        printf("\n VOCE PERDEU!!!\n");
        printf("\n");
        printf("A palavra era: WHILE\n");
        printf("\n");
        printf("\n");
    }

    return 0;
}