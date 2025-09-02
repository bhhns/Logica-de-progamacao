// Laço incondicional, fica definido por um numero definido, usuario nao consegue interagir

// Aprendendo 

/*#include <stdio.h>
int main(){
    int boanoite, i, idade;

    printf("Digite a quantidade de vezes que deseja cumprimentar:");
    scanf("%d", &boanoite);
    
    printf("\ne agora digite sua idade: ");
    scanf("%d", &idade);

    for ( i = 1; i <= boanoite; i++)
    {
        printf("boa noite %d\n", i);
        
    }
    printf("sua idade eh: %d\n", idade);
}*/


/*#include <Stdio.h>
int main(){
    int trabalho, i;
    float media = 0, notas = 0, soma = 0;

    printf("Digite quantos trabalhos voce fez: ");
    scanf("%d", &trabalho);

    for (i = 1; i <= trabalho; i++) {
        printf("Digite a nota do trabalho %d: ", i);
        scanf("%f", &notas);
        soma += notas;
    }

    media = (soma / trabalho);
    printf("A media das notas eh: %.1f\n", media);
   
    return 0;
}*/

#include <stdio.h>

int main() {
    char turma;
    float prova, trabalho, nota_bimestre, media = 0, exame, media_final;
    int alunos, a, b;

    // Perguntar turma
    printf("Digite a turma do aluno (A, B, C...): ");
    scanf(" %c", &turma);

    // Leitura da quantidade de alunos
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &alunos);
    
    // Loop para cada aluno
    for(a = 1; a <= alunos; a++) {
        media = 0;
        
         printf("\n===== Turma %c - Aluno %d =====\n", turma, a);

        // Leitura das notas bimestrais
        for(b = 1; b <= 4; b++) {
            printf("\nTurma %c - %dº Bimestre\n", turma, b);

        // Validação da prova
        do {
            printf("Digite a nota da prova (0 a 8): ");
            scanf("%f", &prova);
            if(prova < 0 || prova > 8) {
                printf("Nota invalida! A prova deve ser entre 0 e 8.\n");
            }
        } while(prova < 0 || prova > 8);
        
        // Validação do trabalho
        do {
            printf("Digite a nota do trabalho (0 a 2): ");
            scanf("%f", &trabalho);
            if(trabalho < 0 || trabalho > 2) {
                printf("Nota invalida! O trabalho deve ser entre 0 e 2.\n");
            }
        } while(trabalho < 0 || trabalho > 2);
        
        nota_bimestre = prova + trabalho;
        printf("Nota final do %dº bimestre: %.2f\n", b, nota_bimestre);

        media += nota_bimestre;
    }

    // Cálculo da média anual
    media /= 4.0;
    printf("\nTurma %c - Media anual: %.2f\n", turma, media);

    // Regras
    if(media >= 7.0) {
        printf("Resultado final: Aprovado direto.\n");
    }

    if(media >= 6.75 && media < 7.0) {
        printf("Resultado final: Aprovado direto (arredondado para 7.0).\n");
    }
    
    if(media < 4.0) {
        printf("Resultado final: Reprovado direto.\n");
    }
    
    if(media >= 4.0 && media < 6.75) {
        printf("Aluno deve fazer exame.\n");

        // Validação da nota do exame
        do {
            printf("Digite a nota do exame (0 a 10): ");
            scanf("%f", &exame);
            if(exame < 0 || exame > 10) {
                printf("Nota invalida! O exame deve ser entre 0 e 10.\n");
            }
        } while(exame < 0 || exame > 10);
        
        media_final = (media + exame) / 2.0;
        printf("Media final: %.2f\n", media_final);
        
        if(media_final >= 5.0) {
            printf("Resultado final: Aprovado no exame.\n");
        }
        if(media_final < 5.0) {
            printf("Resultado final: Reprovado.\n");
        }
    }
}
    
    return 0;
}
