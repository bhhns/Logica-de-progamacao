/* 1  conversao celcius para fahrenheit
#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("digite sua temperatura em celsius:");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("a temperatura em fahrenheit e: %.2f", fahrenheit);
    return 0;

} */

// 2 combustivel gasto na viagem
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

}
