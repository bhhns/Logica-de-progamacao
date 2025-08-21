// Estruturas de Repetição
//Laço condicional pre-teste | nao é obrigado a fazer pelo menos uma vez.
//Laço pos teste | obrigado a fazer pelo menos uma vez para executar dnv.


//Exercicios 
#include <stdio.h>
int main(){
    int num, numeroescolhido;
    num = 1;
    printf("digite o numero final:");
    scanf("%d", &numeroescolhido);
    
    printf("digite o numero inicial:\n");
    scanf("%d", &num);
    
    while(num < numeroescolhido){ // sem o = o laço para exatamente no numero final
        printf("numero %d \n", num);
        num = num + 1; // num++ 
    }
    return 0;
}
