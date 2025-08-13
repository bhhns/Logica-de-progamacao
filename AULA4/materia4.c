// criar um programa que faça a pessoa escolher o representante de turma pelo numero

#include <stdio.h>

int main() {
    int numero;
    printf("Escolha o numero para ser o seu representante de turma (1 a 5): ");
    scanf("%d", &numero);

    if (numero == 1)
        printf("Voce escolheu o JOAO numero 1 como seu representante de turma\n");

    if (numero == 2)
        printf("Voce escolheu o PEDRO numero 2 como seu representante de turma\n");

    if (numero == 3)
        printf("Voce escolheu a CARLA numero 3 como seu representante de turma\n");

    if (numero == 4)
        printf("Voce escolheu o RODINEI numero 4 como seu representante de turma\n");

    if (numero == 5)
        printf("Voce escolheu a FERNANDA numero 5 como seu representante de turma\n");

    if (numero < 1 || numero > 5)
        printf("Numero invalido\n");

    return 0;
}
