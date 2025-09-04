/*
Jogo da velha
Mostrar o tabuleiro
Determinar o jogador da vez
Capturar a jogada
Jogada valida?
Se sim volta pra capturar a jogada
Se nao, so joga
Verificar se alguem ganhou*/

#include <stdio.h>
int main(){
    float notaTrabalho, notaProva, mediaAluno, mediaBim;
    float notaExame, mediaFinal;
    float somaNotas = 0;
    int bimestre;
    
    for (bimestre = 1; bimestre<=4; bimestre++) {
        printf("digite as notas do %d bimestre\n=====================\n", bimestre);
        do {
            printf("digite a nota do trabalho (0 a 10):");
            scanf("%f",&notaTrabalho);
        } while(notaTrabalho < 0 || notaTrabalho > 10);
        do {
            printf("digite a nota do prova (0 a 10):");
            scanf("%f", &notaProva);
        } while(notaProva < 0 || notaProva > 10);

        mediaBim = (notaProva * 0.8) + (notaTrabalho * 0.2);
        somaNotas =  somaNotas + mediaBim;
        printf("a nota do %d bimestre foi: %0.1f \n \n", bimestre, mediaBim);
    }


    mediaAluno = somaNotas / 4;

    printf("a media anual do aluno foi de: %0.1f \n", mediaAluno);
    
    if (mediaAluno >= 6.75 && mediaAluno < 7){
        //arredondamento
        mediaAluno = 7;
        printf("a media anual do aluno arredondada foi para 7\n");
    }

   if  (mediaAluno >= 7){
    printf(" o aluno passou direto de ano!\n");
   }

   if (mediaAluno < 4){
    printf("o aluno reprovou!\n");
   }

   if (mediaAluno >= 4 && mediaAluno < 6.75){
    printf("o aluno precisa fazer exame!\n");
    do {
         printf("digite a nota do  (0 a 10):");
        scanf("%f", &notaExame);
    } while(notaExame < 0 || notaExame > 10);

    mediaFinal = (notaExame + mediaAluno) /2;

    if (mediaFinal >= 5){
        printf("o aluno passou com a nota %0.1f\n", mediaFinal);
    }else{
    printf("o aluno reprovou com a nota do exame%0.1f\n", mediaFinal);
   }


    return 0;
}