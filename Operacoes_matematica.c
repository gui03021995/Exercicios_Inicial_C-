#include <stdio.h>

int main()
{
    float num1, num2, sum, sub, mult, quadrado,cubo, div;

    printf("Digite o primeiro numero: " );
    scanf("%f", &num1);

    printf("Digite o segundo numero: " );
    scanf("%f", &num2);

    //Soma
    sum = num1 + num2;

    //Subtração
    sub = num1 - num2;

    //Multiplicaçao
    mult = num1 * num2;

    //Divisão
    div = num1/num2;

    //Quadrado
    quadrado=num1*num1;

    //Cubo
    cubo= num1*num1*num1;

    printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
    printf("%.2f - %.2f = %.2f\n", num1, num2, sub);
    printf("%.2f * %.2f = %.2f\n", num1, num2, mult);
    printf("%.2f / %.2f = %.2f\n", num1, num2, div);
    printf("%.2f * %.2f = %.2f\n", num1, num1, quadrado);
    printf("%.2f * %.2f * %.2f= %.2f\n", num1, num1,num1, cubo);
}
