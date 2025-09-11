/* estrutura homogenea de uma dimensao
INDICE
numero inteiro
positivo
[x] variavel
formula matematica: desde que o resultado seja um numero inteiro [x + 3]
o indice deve existir 
começa do 0 */

// V1 ler 3 idades e somar as 3

/*#include <stdio.h>
int main(){
    int idades [3];

    
    printf("Digite a idade 1: ");
    scanf("%d", &idades[0]);
    
    printf("digite a idade 2:");
    scanf("%d", &idades[1]);
    
    printf("digite a idade 3:");
    scanf("%d", &idades[2]);
    
    printf("Idade 1: %d\n", idades[0]); printf("Idade 2: %d\n", idades[1]); printf("Idade 3: %d\n", idades[2]);
    printf("A soma das idades: %d\n", idades[0] + idades[1] + idades[2]);
    return 0;
}*/

// V2 ler 200 idades e ver a media delas usar laços

/*#include <stdio.h>
int main(){
    int idades [200];
    int i, soma = 0;

    for (i = 0; i < 200; i++){
        printf("digite a idade %d: ", i);
        scanf("%d", &idades[i]);
    }
    for (i = 0; i < 200; i++){
        soma = soma + idades[i];
    } 
    printf("a media das idades vao ser de: %d\n", soma / 200);
    return 0;
}*/

//  V3 permitir que o professor escolha a quantidade de idades lidas

/*#include <stdio.h>
int main(){
    int idade [200];
    int i, soma = 0, n;
    
    printf("quantas idades voce quer ler?");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        printf("digite as idades que quer ver:");
        scanf("%d", &idade[i]);
        soma = soma + idade[i];
    }
    printf("as idades sao:\n");
    for (i = 0; i < n; i++){
        printf("%d\n", idade[i]);
    }
    printf("a media das idades sao: %d\n", soma / n);
    return 0;
}*/

//V4 e V5 ultima ate a primeira

/*#include <stdio.h>
int main(){
    int idade [200];
    int i, soma = 0, n;
    
    printf("quantas idades voce quer ler?");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        printf("digite as idades que quer ver:");
        scanf("%d", &idade[i]);
        soma = soma + idade[i];
    }
    printf("as idades sao:\n");
    for (i = n - 1; i >= 0; i--){
        printf("%d\n", idade[i]);
    }
    printf("a media das idades sao: %d\n", soma / n);
    return 0;
}*/


//jeito do professor
#include <stdio.h>
int main(){

    int numIdades,soma = 0;
    int cont,qtd = 1;
    float media;
    

    printf(" digite a quantidades de idades:");
    scanf("%d", &numIdades);
    int idades [numIdades];

    for(cont = 0; cont < numIdades; cont = cont+1){
    printf("digite a %d idade:", qtd);
    scanf("%d", &idades[cont]);
    qtd = qtd + 1;
    soma = soma + idades[cont];
    }

    for(cont = numIdades - 1 ; cont >= 0; cont--){
        printf("a %da idade eh %d \n", cont+1, idades[cont]);
    }

    for(cont = 0; cont < numIdades; cont++){
        printf("a %da idade eh %d \n", cont+1, idades[cont]);
    }

     media = soma / 200;

     printf("a media das idades eh %f", media);

}