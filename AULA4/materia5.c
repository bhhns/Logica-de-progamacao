// comando de seleçao

#include <stdio.h>

int main() {
    int numero;
   
    printf("Escolha o numero para ser o seu representante de turma (1 a 3): ");
    scanf("%d", &numero);

switch (numero) {
    case 1:
        printf("Voce escolheu o JOAO numero 1 como seu representante de turma\n");
        break;
    case 2:
        printf("Voce escolheu o PEDRO numero 2 como seu representante de turma\n");
        break;
    case 3:
        printf("Voce escolheu a CARLA numero 3 como seu representante de turma\n");
        break;
    default:
        printf("Numero invalido\n");
        break;
    return 0;
   }
}