#include <stdio.h>
struct Produto{
    int codigo;
    char Nome[25];
    char categoria;
    double valor;
};
int main(){
    struct Produto Produtos[5];


    for(int i=0; i<5; i++){
        printf("digite o codigo do produto %d: ", i+1);
        scanf("%d", &Produtos[i].codigo);

        printf("digite o nome do produto %d: ", i+1);
        scanf("%s", Produtos[i].Nome);

        printf("digite a categoria do produto %d: ", i+1);
        scanf(" %c", &Produtos[i].categoria);

        printf("digite o valor do produto %d: ", i+1);
        scanf("%lf", &Produtos[i].valor);
    }

    printf("\nDados do produto:\n");
    for(int i=0; i<5; i++){
        printf("Codigo: %d\n", Produtos[i].codigo);
        printf("Nome do Produto: %s\n", Produtos[i].Nome);
        printf("Categoria: %c\n", Produtos[i].categoria);
        printf("Valor: %.2f\n", Produtos[i].valor);
    }

    return 0;

}