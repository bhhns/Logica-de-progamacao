// fazendo um comando que ve as faltas e as notas 

#include <stdio.h>
int main(){
    float a1, a2, mediafinal, prova3, novamediafinal;
    int faltas;
    
    printf("digite suas faltas(0 a 20):");
    scanf("%d", &faltas);

    if(faltas > 20){
        printf("voce teve %d falta, por isso reprovou");
    }else{ print("voce passou por ter menos falta, vamos ver suas notas!")
        printf("digite a nota a1 (0 a 5)");
        scanf("%f", &a1);
        printf("digite a nota a2 (0 a 5)");
        scanf("%f", &a2);
        mediafinal = a1 + a2;

        if (mediafinal >= 6){
            printf("voce tirou a1 = %0.1f e a2 = %0.1f\n", a1, a2);
            printf("sua media final = %0.1f(a1 + a2)\n", mediafinal);
            printf("voce passou por sua media ser maior que 6\n");
        } else{
            printf("voce tirou a1 = %0.1f e a2 = %0.1f\n", a1, a2);
            printf("sua media final = %0.1f(a1 + a2)\n", mediafinal);
            printf("voce reprovou por sua media ser menor que 6\n");
            scanf("%f", &prova3);
           
            if(a1 < a2){
                novamediafinal = a1 + prova3;
            } else{
                novamediafinal = a2 + prova3;
                
            }
        }
    }
}