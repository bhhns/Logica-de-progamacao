// 7%2 == 1 resto inteiro da divisao // 7/2 = 3,5
/*x =(int)30/8 cast
x = 30%8
x = 30/8
nao e ou | entre parenteses pra dar prioridade
&& = AND  (x>y) && (a <= b)
|| = OR  (x>y) || (a <= b)
! = NOT  !(x>y)
!= diferente  (x != y)
*/

// Exercicio 
#include <stdio.h>
int main(){
    float salario, mediafinal;
    int faltas, ganhoumegasena;

    printf("digite sua media final:");
    scanf("%f",&mediafinal);
    
    printf("digite suas faltas:");
    scanf("%d", &faltas);
    
    printf("digite seu salario:");
    scanf("%f", &salario);
    
    printf("ganhou na megasena?(1-sim / 0- nao)");
    scanf("%d", &ganhoumegasena);
    
    if ((mediafinal >= 6 && faltas <= 15) && (salario >= 60000.00 || ganhoumegasena == 1));{
        printf("Bora pra europa");
    }
return 0;
}

