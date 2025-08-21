// Exercicio
/*v1 programa que leia as nota de um aluno av1 e av2. calcular e mostrar a media de valor, permita que o prof calcule outras notas ate ele cansar apenas com if e while
v2 mudar para S e N as respostas do professor

#include <stdio.h>
int main(){
    float av1, av2, media;
    char continuar;
    continuar = 'S';
    
    printf("digite as notas do aluno 0 a 5,0:");
    scanf("%f %f", &av1, &av2);
    
    media = (av1 + av2) / 2;
    
    printf("sua media eh de %.2f\n", media);
    
    while(continuar == 'S'){
        printf("deseja calcular outra media? S OU N \n");
        scanf(" %s", &continuar);
        if (continuar == 'S'){
            printf("digite as outras notas:");
            scanf("%f %f", &av1, &av2);
            media = (av1 + av2) ;
            printf("sua media eh de %.2f\n", media);

        }

    }
    return 0;

}*/

// v3 caso digite nota invalida nao seja entre 0 e 5,0. deve soliciar que digite a nota novamente so vai prosseguir  com nota valida 
#include <stdio.h>
int main(){
    float av1,av2,media;
    char continuar;
    continuar = 'S';
    printf("digite as notas do aluno 0 a 5,0:");
    scanf("%f %f", &av1, &av2);
    while(av1 < 0 || av1 > 5.0 || av2 < 0 || av2 > 5.0){
        printf("nota invalida, digite novamente as notas do aluno 0 a 5,0:");
        scanf("%f %f", &av1, &av2);
        if (av1 >= 0 && av1 <= 5.0 && av2 >= 0 && av2 <= 5.0) {
            media = (av1 + av2) / 2;
            printf("sua media eh de %.2f\n", media);
        }
    }
}