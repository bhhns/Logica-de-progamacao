// Laço pos-teste, executa o codigo depois pergunta se quer fazer novamente

// Versão 1 
// par ou impar e quando digitar zero acaba o codigo

/*#include <stdio.h>
int main(){
    int num, num1;
    do {
        printf("Digite um numero inteiro:");
        scanf("%d", &num);
        num1 = num % 2;
        if (num1 == 0) {
            printf("seu numero eh par\n");
        } else {
            printf("seu numero eh impar\n");
        }
    } while (num != 0);
    return 0;
}*/

// Versão 2
// digitar apenas numeros positivos, caso digite numero negativo  nao calcular impar/par, deve pedir para digitar novamente

/*#include <stdio.h>
int main(){
    int num, num1;
    do{
        printf("Digite um numero inteiro:");
        scanf("%d", &num);
        
        if (num < 0 ){
            printf("seu numero eh negativo!! digite novamente\n");
        }else{
            num1 = num % 2;
            if (num == 0){
                printf("fim do programa");
            }
            if (num1 == 0){
                printf("seu numero eh par\n");
            }else{
                printf("seu numero eh impar\n");
                
            }
        }
    }while (num != 0);
    return 0;
}*/


// Versão 3 entre 50 e 150 e se digitar 100 acaba

/*#include <stdio.h>
int main(){
    int num, num1;

    do{
        printf("Digite um numero entre 50 e 150:");
        scanf("%d", &num);
       
        if (num <50 || num >150){
            printf("Numero invalido, digite novamente\n");
        }else {
            num1 = num % 2;
            
            if (num1 == 0){
                printf("seu numero eh par\n");
            }else{
                printf("seu numero eh impar\n");
            }
        }
    }while (num != 100);
    return 0;
}*/


    // Versão 4 a condição de saida eh se o numero testado for divisivel por 5

/*#include <stdio.h>

int main(){
    int num, num1;

    do{
        printf("Digite um numero entre 50 e 150:");
        scanf("%d", &num);

        if (num <50 || num >150){
            printf("Numero invalido, digite novamente\n");
        }else {
            num1 = num % 2;
            
            if (num1 == 0){
                printf("seu numero eh par\n");
            }else{
                printf("seu numero eh impar\n");
            }
        }
    }while (num % 5 != 0);
    return 0;
}*/