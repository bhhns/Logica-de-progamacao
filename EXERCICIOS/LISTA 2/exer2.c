/* 1  conversao celcius para fahrenheit
#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("digite sua temperatura em celsius:");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 9 + 160) / 5;
    printf("a temperatura em fahrenheit e: %.2f", fahrenheit);
    return 0;

} */

/* 2 combustivel gasto na viagem
#include <stdio.h>
int main(){
    float tempo, velocidade, distancia, litros;
    printf("digite o tempo de viagem (h):");
    scanf("%f", &tempo);
    printf("digite a velocidade media (km/h):");
    scanf("%f", &velocidade);
    distancia = tempo * velocidade;
    litros = distancia / 12;
    printf("velocidade media: %.2f km/h\n", velocidade);
    printf("o tempo gasto na viagem e: %.2f h\n", tempo);
    printf("a distancia percorrida: %.2f km\n", distancia);
    printf("litros usados: %.2f L\n", litros);
    return 0;

}*/

/* 3 prestação em atraso
#include <stdio.h>
int main(){
    float valor, taxa, tempo, prestacao;
    printf("digite o valor da prestacao:");
    scanf("%f", &valor);
    printf("digite a taxa de juros (em porcentagem):");
    scanf("%f", &taxa);
    printf("digite o tempo de atraso em dias");
    scanf("%f", &tempo);
    prestacao = valor + (valor * (taxa / 100) * tempo);
    printf("o valor da prestacao em atraso eh: %.2f", prestacao);
    return 0;
} */

/*4 troca de valores
#include <stdio.h>
int main(){
    float a, b, c;
    printf("digite o valor de a:");
    scanf("%f", &a);
    printf("digite o valor de b:");
    scanf("%f", &b);
    c = a; a = b; b = c;
    printf("os valores agora sao A = %.2f e B = %.2f", a, b);
    return 0;   
}*/

/* 5 combinacao adicao e multiplicacao
#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("digite 4 numeros(inteiros):");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf(" a soma dos valores vai ser:\n %d, %d, %d, %d, %d, %d, %d",a+b, a+c, a+d,b+a, b+c, b+d, c+d);
    printf(" \n a multiplicacao dos valores vai ser:\n %d, %d, %d, %d, %d, %d, %d",a*b, a*c, a*d,b*a, b*c, b*d, c*d);
    return 0;
} */

/* 6 valor ao quadrado
#include <stdio.h>
int main(){
    float valor;
    printf("digite um numero:");
    scanf("%f", &valor);
    printf("o valor ao quadrado eh: %.2f", valor * valor);
    return 0;
}*/

/* 7 converter dolar para real 
#include <stdio.h>
int main(){
    float dolar, cotacao;
    printf("cotacao do dolar:");
    scanf("%f", &cotacao);
    printf("digite o seu valor em dolar:");
    scanf("%f", &dolar);
    printf("o valor em real eh de %.2f", dolar * cotacao);
    return 0;

}*/

/* 8 novo salario 
#include <stdio.h>
int main(){
    float salario, novoSalario;
    printf("digite o seu salario atual:");
    scanf("%f", &salario);
    novoSalario = salario * 1.1;
    printf("o seu novo salario eh: %.2f", novoSalario);
    return 0;
}*/

// 9 eleicao sindical 
#include <stdio.h>
int main (){
    
}