#include <stdio.h>
#include <string.h>

#define MAX_LEMBRETES 10
#define MAX_TAM_LEMBRETE 100

int main() {
    char lembretes[MAX_LEMBRETES][MAX_TAM_LEMBRETE];
    int numLembretes = 0;
    int opcao;

    printf("Bem-vindo ao seu aplicativo de lembretes!\n");

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar lembrete\n");
        printf("2. Listar lembretes\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numLembretes < MAX_LEMBRETES) {
                    printf("Digite o lembrete (até %d caracteres): ", MAX_TAM_LEMBRETE - 1);
                    scanf(" %[^\n]", lembretes[numLembretes]);
                    numLembretes++;
                    printf("Lembrete adicionado com sucesso!\n");
                } else {
                    printf("A lista de lembretes está cheia.\n");
                }
                break;

            case 2:
                if (numLembretes > 0) {
                    printf("Lista de lembretes:\n");
                    for (int i = 0; i < numLembretes; i++) {
                        printf("%d. %s\n", i + 1, lembretes[i]);
                    }
                } else {
                    printf("A lista de lembretes está vazia.\n");
                }
                break;

            case 3:
                printf("Saindo do aplicativo de lembretes.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
// Output: