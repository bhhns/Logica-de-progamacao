// dar opçoes, 1 verifica se é impar ou par,2 encontra o quadrado, 3 faz a divisao de 2 numeros e fazer as contas.
/*VERSAO 1
#include <stdio.h>

int main(){
    int caso1;
    float caso2, caso3;

    int numero;
    printf("escolhe alguns dos numeros (1 a 3): ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Voce escolheu a opcao 1: Verificar se um numero e par ou impar\n");
            scanf("%d", &caso1);
            if (caso1 % 2 == 0) {
                printf("O numero %d eh par\n", caso1);
            } else {
                printf("O numero %d eh impar\n", caso1);
            }
            break;
        case 2:
            printf("Voce escolheu a opcao 2: Encontrar o quadrado de um numero\n");
            scanf("%f", &caso2);
            printf("O quadrado de %.2f e %.2f\n", caso2, caso2 * caso2);
            break;
        case 3:
            printf("Voce escolheu a opcao 3: Fazer a divisao de dois numeros\n");
            scanf("%f %f", &caso2, &caso3);
            if (caso3 == 0) {
                printf("Erro: Divisao por zero\n");
            } else {
                printf("A divisao de %.2f por %.2f eh %.2f\n", caso2, caso3, caso2 / caso3);
            }
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}*/

// VERSAO 2, colocar senha pre definida pro usuario tentar adivinhar pra entrar no comando

#include <stdio.h>

int main() {
    int senha = 0;  // inicializa a senha
    int numero;
    int caso1;
    float caso2, caso3;

    // Loop de senha
    while (senha != 2534) {
        printf("Digite a senha (1 a 5): ");
        scanf("%d", &senha);

        if (senha == 2534){
            printf("Senha correta, acesso liberado\n");
        }else{
            printf("Senha incorreta, tente novamente.\n");
        }
    }
    // Menu de operações
    printf("Escolha uma opcao (1 a 3):\n");
    printf("1) Verificar se eh par ou impar\n");
    printf("2) Encontrar o quadrado de um numero\n");
    printf("3) Fazer a divisao de dois numeros\n");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Digite o numero: ");
            scanf("%d", &caso1);
            if (caso1 % 2 == 0){
                printf("O numero %d eh par\n", caso1);
            }else{
                printf("O numero %d eh impar\n", caso1);
            }
            break;

        case 2:
            printf("Digite o numero: ");
            scanf("%f", &caso2);
            printf("O quadrado de %.2f eh %.2f\n", caso2, caso2 * caso2);
            break;

        case 3:
            printf("Digite os dois numeros: ");
            scanf("%f %f", &caso2, &caso3);
            if (caso3 == 0) {
                printf("Erro: Divisao por zero\n");
            } else {
                printf("A divisao de %.2f por %.2f eh %.2f\n", caso2, caso3, caso2 / caso3);
            }
            break;

        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}
