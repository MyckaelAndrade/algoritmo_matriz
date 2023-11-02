//Questão 2:
//Criar um programa para cadastrar e listar uma matriz de números inteiros
//Um procedimento contendo uma para cadastrar as frutas;
//Outro procedimento para lista matriz transposta da matriz cadastrada;
//E outro procedimento para listar a matriz original e a matriz transposta;
//e um menu de controle para executar os procedimentos;
#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 4
int matriz[MAX_ROWS][MAX_COLS]; // matriz global para armazenar os números inteiros cadastrados
// procedimento para cadastrar a matriz de frutas
void cadastrarFrutas() {
    int i, j;
    printf("Cadastro de frutas:\n");
    for (i = 0; i < MAX_ROWS; i++) {
        for (j = 0; j < MAX_COLS; j++) {
            printf("Digite o numero inteiro da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
// procedimento para listar a matriz transposta
void listarTransposta() {
    int i, j;
    printf("Matriz transposta:\n");
    for (j = 0; j < MAX_COLS; j++) {
        for (i = 0; i < MAX_ROWS; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
// procedimento para listar a matriz original e a matriz transposta
void listarMatrizes() {
    int i, j;
    printf("Matriz original:\n");
    for (i = 0; i < MAX_ROWS; i++) {
        for (j = 0; j < MAX_COLS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    listarTransposta();
}
// procedimento para exibir o menu de controle
void exibirMenu() {
    int o;
    do {
        printf("\n========== Menu ==========\n");
        printf("1 - Cadastrar matriz de numeros inteiros\n");
        printf("2 - Listar matriz transposta\n");
        printf("3 - Listar matriz original e transposta\n");
        printf("4 - Sair");
        printf("==========================================");
        printf("Digite a alternativa desejada: ");
        scanf("%d", &o);
        switch (o) {
            case 1:
                cadastrarFrutas();
                break;
            case 2:
                listarTransposta();
                break;
            case 3:
                listarMatrizes();
                break;
            case 4:
                printf("Fim.................................. \n");
                break;
            default:
                printf("Alternativa invalida, tente novamente. \n");
        }
    } while (o!= 4);
}
// função principal
int main() {
    exibirMenu();
    return 0;
}
