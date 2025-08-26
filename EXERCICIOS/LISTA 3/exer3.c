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
   

// 3 