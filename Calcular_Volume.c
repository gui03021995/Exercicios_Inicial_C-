#include <stdio.h>

int main()
{
    float h, raio, volume;

    printf("Digite o valor da altura: " );
    scanf("%f", &h);
    printf("Digite o valor do raio: " );
    scanf("%f", &raio);

    volume = 3.14159 * (raio * raio) * h;

    printf(" O valor do volume é: %.2f", volume);
}
