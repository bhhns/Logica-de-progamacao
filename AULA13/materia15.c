// String = cadeia de caracteres

// caso tenha 2 nomes, mostra apenas o primeiro
/*#include <stdio.h>
int main(){
    char produto[21];
    printf("insira o nome do produto : ");
    scanf("%s", produto);
    printf("o produto digitado foi: %s", produto);
    return 0;
}*/


/* #include <stdio.h>

int main() {
    char nome[31];
    char batata[31];       
    char contrario[31];    
    int i = 0, caracter = 0;

    printf("Digite seu nome completo: ");
    gets(nome);

    // Copiando nome para batata e contando caracteres
    while (nome[i] != '\0') {
        batata[i] = nome[i];
        i++;caracter++;
    }
    batata[i] = '\0'; 

    // criando nome invertido no vetor contrario
    for (i = 0; i < caracter; i++) {
        contrario[i] = nome[caracter - 1 - i];
    }
    contrario[caracter] = '\0';

    // resultados
    printf("\nNome original: %s\n", nome);
    printf("Copia do nome: %s\n", batata);
    printf("Nome ao contrario: %s\n", contrario);
    printf("Numero de caracteres: %d\n", caracter);

    return 0;
}
 */

 // jeito professor
/* #include <stdio.h>
#include <locale.h>  
int main(){
    
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    char nomeb[30];
    char nomec[30];
    int cont, tam, contInverso;

    printf("Digite seu nome completo: \n");
    scanf("%30[^\n]", nome);
    printf("O nome digitado foi: %s \n", nome);

    // ver quantos caracteres tem o nome
    cont = 0;
    do{
        cont++;
    }while(nome[cont] != '\0');
    tam = cont; // tamanho da string
    printf("O nome %s tem %d caracteres \n", nome, cont);

    // mostrando o nome sem usar %s
    printf("o nome sem usar \%%s: \n");
    for(cont = 0; cont < tam; cont++){
        printf("%c ", nome[cont]);
    }

    // copiando o nome para outro vetor, copiando caracter por caracter
    for(cont = 0; cont < tam; cont++){
        nomeb[cont] = nome[cont];
    }
    printf("\no nome no vetor A: %s \n", nome);
    printf("o nome no vetor B: %s \n", nomeb);

    // invertendo o nome
    cont = 0;
    contInverso = tam;
    do{
        contInverso--; // faz a contagem reversa
        nomec[cont] = nome[contInverso];
        cont++;
    }while(contInverso >= 0);
    nomec[tam] = '\0'; // colocar o \0 no final da string
    printf("o nome no vetor C: %s \n", nomec);



    // fazer essa lista so que em todos os comandos
    int qntNomes, contNomes;
    printf("Digite a quantidade de nomes:");
    scanf("%d", &qntNomes);
    char listanomes[qntNomes][30];

    for(contNomes = 0; contNomes< qntNomes; contNomes++){
        printf("Digite o nome %d: ", contNomes);
        scanf(" %30[^\n]", listanomes[contNomes]);
    }

    printf("os nomes digitados foram: \n");
    for(contNomes = 0; contNomes< qntNomes; contNomes++){
        printf(" %s\n", listanomes[contNomes]);
    }


    return 0;

}
  */

