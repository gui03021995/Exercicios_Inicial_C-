#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float nota1, nota2,nota3, media;


  printf("Digite a primeira noAta do aluno: ");
  scanf("%f",&nota1);

  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);

  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&nota3);

  media = (nota1 + nota2+nota3) / 3;

  printf("Media do aluno = %.1f\n",media);

  system("pause");//pausa da tela somente para Windows
  return 0;//retorno da função main
}
