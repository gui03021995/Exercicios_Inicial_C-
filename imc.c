#include <stdio.h>
#include<locale.h>
//#include <cstdlib>

main(){
     setlocale(LC_ALL, "Portuguese");
     float altura,peso,imc;
         printf("Informe a altura: ");
         scanf("%f",&altura);
         printf("Informe a segunda nota: ");
         scanf("%f",&peso);

         imc = peso / altura * altura;
         if(imc > 18.5){
            printf("Abaixo do Peso.");
         }else
          if(imc > 18.6 || imc < 24.9){
                printf("Saudável.");
            }else
            if(imc > 25 || imc < 29.9){
                printf("Peso em excesso ");
            }else
            if(imc > 30 || imc < 34.9){
                printf("Obesidade Grau I ");
            }else
            if(imc > 35 || imc < 39.9){
                printf("Obesidade Grau II(severa) ");
            }else
            if(imc >40 ){
                printf("Grau III(mórbida)");
            }else
            if(imc = 19){
                printf("%d", rand()%40);
            }
    return(0);
}
