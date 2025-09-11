/* Estruturas Homogeneas Multidimensionais */

// fazer um programa que leia 10 alunos e mostra as provas e trabalhos, separando cada um deles

#include <stdio.h>
int main(){
    float notas[10][5];
    int i, notaProva, notaTrabalho, notaProva2, notaTrabalho2, alunos;
    float media [10];


    for(i = 0; i < 10; i++){

        printf("Digite a nota da prova 1 do aluno %d (0 a 10): ", i + 1);
        scanf("%d", &notaProva);
        notas[i][0] = notaProva;

        printf("Digite a nota do trabalho 1 do aluno %d (0 a 10): ", i + 1);
        scanf("%d", &notaTrabalho);
        notas[i][1] = notaTrabalho;

        printf("Digite a nota da prova 2 do aluno %d (0 a 10): ", i + 1);
        scanf("%d", &notaProva2);
        notas[i][2] = notaProva2;

        printf("Digite a nota do trabalho 2 do aluno %d (0 a 10): ", i + 1);
        scanf("%d", &notaTrabalho2);
        notas[i][3] = notaTrabalho2;

        media[i] = ((notaProva + notaTrabalho) / 2) + ((notaProva2 + notaTrabalho2) / 2) / 2; // calculando a media
    }
   
    printf("as notas dos alunos sao:\n");
   
    for(i = 0; i < 10; i++){
        printf("Aluno %d:| Prova1: %.1f| Trabalho1: %.1f| Prova2: %.1f| Trabalho2: %.1f| Media: %.1f|\n", i + 1, notas[i][0], notas[i][1], notas[i][2], notas[i][3], media[i]);
    }
    return 0;
}


// jeito professor

/*#include <stdio.h>
int main(){

    float boletim[10][5];
    int aluno, nota;
    
    // preenchimento por aluno
    //linha representa aluno

    
    for(aluno = 0; aluno < 10; aluno++){   // mudar os alunos
        for(nota = 0; nota < 5; nota ++){  // mudar as notas dos alunos
            scanf("%f", &boletim[aluno][nota]);
        }
    }

    return 0;
}*/