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
    float media, notas, soma = 0;

    printf("Digite quantos trabalhos voce fez: ");
    scanf("%d", &trabalho);

    for (i = 1; i <= trabalho; i++) {
        printf("Digite a nota do trabalho %d: ", i);
        scanf("%f", &notas);
        soma += notas;
    }

    media = (soma / trabalho);
    printf("A media das notas eh: %.2f\n", media);
}*/

#include <stdio.h>
int main(){
    
    float notas, media = 0, exame, mediafinal;
    int i;

    printf("Digite as 4 notas: \n");

    for(i = 0; i < 4; i++){
        scanf("%f", &notas);
        media += notas;
    }
    media /= 4;
    printf("Media anual: %.2f\n", media);
    if (media >= 7 || (media >= 6,75 && media < 7)){
        printf("Resultado final: Aprovado Direto\n");
    }
    else {
        
    }




    return 0;
}