#include <stdio.h>
#include <stdlib.h>

float m_km(){
      float m;
      printf("Digite o valor em metros: \n");
      scanf("%f",&m);
      printf("A medida em  de: %.3f cm", m/1000);
      }
float m_ft(){
      float m;
      printf("Digite o valor em metros: \n");
      scanf("%f",&m);
      printf("A medida em pés é: %.3f ft", m*3.2808);
      }
     
float m_polegadas(){
      float m;
      printf("Entre com o valor em metros: \n");
      scanf("%f",&m);
      printf("A medida em polegadas de:%.3f pol", m*39.370);
      }

main(){
       int opcao;
       char op;
     printf("OPERAÇÕES DE CONVERSÃO DE COMPRIMENTO\n");
     printf("1-Para Converte Metros em Quilometros\n");
     printf("2-Para Converter Metros em Pes\n");
     printf("3-Para Converter Metros em Polegadas\n");
     printf("Digite o codigo da operação desejada: ");
      scanf("%d",&opcao);
     switch(opcao){
                  case 1:
                       m_km();
                  break;
                  case 2:
                       m_ft();
                  break;    
                  case 3:
                       m_polegadas();
                  break;     
                  default:
                          printf("OP%c%cO INV%cLIDA\n",135,198,160);
                  break;
}            
 return 0;
}