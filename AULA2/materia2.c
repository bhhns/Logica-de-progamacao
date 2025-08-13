// Estrutura sequencial, estrutura de repetição e estrutura de seleção


// desafio 1
#include <stdio.h>
int main(){
    int num1, num2, subtração, soma, multiplicação;   // cria as variáveis 
    float divisao;
    num1 = 55;
    num2 = 29;
    divisao = (float)num1 / num2;
    subtração = num1 - num2;
    soma = num1 + num2;
    multiplicação = num1 * num2;
   
    printf("num1 = %d\nnum2 = %d\nO valor da subtração é de %d\nO valor da sua divisão é de %.2f\nO valor da soma é de %d\nO valor da multiplicação é de %d", num1, num2, subtração, divisao, soma, multiplicação);

    return 0;    
}

//desafio 2
#include<stdio.h>
void main(){
    int x;
    float salario, result;
    printf("digite o salario:");
    scanf("%f", &salario);
    printf("digite o fator de bonus:");
    scanf("%d", &x);
    result = salario * x * 0.5;
    printf("resultado = %f", result);
    printf("resultado = %0.2f \n, result");
}


// desafio 3
#include <stdio.h>
int main(){
    float num1, num2, subtração, soma, multiplicação, quadrado, cubo, divisao;
    printf("digite um numero:");
    scanf("%f", &num1);
    printf("digite outro numero:");
    scanf("%f", &num2);
    divisao = (float)num1 / num2;
    subtração = num1 - num2;
    soma = num1 + num2;
    multiplicação = num1 * num2;
    quadrado = num1 * num1;
    cubo = num2 * num2* num2;
   
    printf("num1 = %.3f\nnum2 = %.3f\nO valor da subtração é de %.3f\nO valor da sua divisão é de %.3f\nO valor da soma é de %.3f\nO valor da multiplicação é de %.3f\n O valor do quadrado vai ser de %.3f\n O valor do cubo vai ser de %.3f", num1, num2, subtração, divisao, soma, multiplicação, quadrado, cubo);

    return 0;    
}