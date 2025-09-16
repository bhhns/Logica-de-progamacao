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


#include <stdio.h>

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

    // Criando nome invertido no vetor contrario
    for (i = 0; i < caracter; i++) {
        contrario[i] = nome[caracter - 1 - i];
    }
    contrario[caracter] = '\0';

    // Mostrando resultados
    printf("\nNome original: %s\n", nome);
    printf("Copia do nome: %s\n", batata);
    printf("Nome ao contrario: %s\n", contrario);
    printf("Numero de caracteres: %d\n", caracter);

    return 0;
}
