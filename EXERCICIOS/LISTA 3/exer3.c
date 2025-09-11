/* 1 diferença do maior pelo menor
#include <stdio.h>
int main(){

    int num1, num2, dif;

    printf("digite dois numeros inteiros:");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2){
        dif = num1 - num2;
    }else{
        dif = num2 - num1;
    }
   
    printf("A diferenca eh: %d\n", dif);
    return 0;
} */

/* 2 media com exame

#include <stdio.h>
    int main(){
        float n1, n2, n3, n4, exame, media, novaMedia;
       
        printf("digite o valor da nota de cada bimestre:");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
       
        media = (n1 + n2 + n3 + n4) / 4;
       
        if (media >= 7) {
            printf("Aprovado com media: %.2f\n", media);
        } else {
                printf("digite a nota do exame:");
                scanf("%f", &exame);
                novaMedia = (media + exame) / 2;
                if (novaMedia >= 7) {
                    printf("Aprovado em exame com media: %.2f\n", novaMedia);
                } else {
                    printf("Reprovado com media: %.2f\n", novaMedia);
                }
            }
            return 0;
    } */
   

// 3 bhaskara
/*#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2, parte_real, parte_imaginaria;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Nao e uma equacao do segundo grau.\n");
    } else {
        delta = (b * b) - (4 * a * c);

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Duas raizes reais: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
        }
        else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Uma raiz real: x = %.2lf\n", x1);
        }
        else { 
            parte_real = -b / (2 * a);
            parte_imaginaria = sqrt(-delta) / (2 * a);
            printf("Duas raizes complexas:\n");
            printf("x1 = %.2lf + %.2lfi\n", parte_real, parte_imaginaria);
            printf("x2 = %.2lf - %.2lfi\n", parte_real, parte_imaginaria);
        }
    }

    return 0;
}*/

// 4 ordem crescente
/*#include <stdio.h>
int main(){
    int a, b, c, temp;
    printf("digite tres numeros inteiros:");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    printf("Ordem crescente: %d %d %d\n", a, b, c);
}*/