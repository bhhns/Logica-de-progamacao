// fazendo um comando que ve as faltas e as notas 

#include <stdio.h>

int main() {
    float a1, a2, mediafinal, prova3;
    int faltas;

    printf("Digite suas faltas (0 a 20): ");
    scanf("%d", &faltas);

    if (faltas > 20) {
        printf("Voce teve %d faltas, por isso reprovou\n", faltas);
    } else {
        printf("Voce passou por ter menos faltas, vamos ver suas notas!\n");

        printf("Digite a nota A1 (0 a 5): ");
        scanf("%f", &a1);

        printf("Digite a nota A2 (0 a 5): ");
        scanf("%f", &a2);

        mediafinal = a1 + a2;

        if (mediafinal >= 6) {
            printf("Voce tirou A1 = %.1f e A2 = %.1f\n", a1, a2);
            printf("Sua media final = %.1f\n", mediafinal);
            printf("Voce passou por sua media ser maior ou igual a 6\n");
        } else {
            printf("Voce tirou A1 = %.1f e A2 = %.1f\n", a1, a2);
            printf("Sua media final foi de = %.1f ou seja, precisa fazer prova3\n", mediafinal);
            

            printf("Digite a nota da Prova 3 (0 a 5): ");
            scanf("%f", &prova3);

            // Substitui a menor nota pela prova 3
            if (a1 < a2) {
                a1 = prova3;
            } else {
                a2 = prova3;
            }

            mediafinal = a1 + a2;

            if (mediafinal >= 6) {
                printf("Com a substituicao, A1 = %.1f e A2 = %.1f\n", a1, a2);
                printf("Sua nova media final = %.1f\n", mediafinal);
                printf("Voce passou por sua nova media ser maior ou igual a 6\n");
            } else {
                printf("Com a substituicao, A1 = %.1f e A2 = %.1f\n", a1, a2);
                printf("Sua nova media final = %.1f\n", mediafinal);
                printf("Voce reprovou mesmo apos a substituicao\n");
            }
        }
    }

    return 0;
}
