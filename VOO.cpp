#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  //declaração de variáveis do tipo INTEIRO
  int  distancia, velocidade;
  float resultado;
  float pi = 3.14;  
  printf("Valor de pi %f\n", pi );
  
  printf("Digite a distancia até o destino: ");
  scanf("%d", &distancia); //recebe um inteiro e armazena na variável distancia
  
  printf("Digite a velocidade média da aeronave: ");
  scanf("%d", &velocidade); //recebe um inteiro e armazena na variável velocidade
  //resultado = distancia / velocidade;
  //Efetua a divisão da distancia pelo velocidade média e armazena na variável resul
  
  printf("voce chegara ao seu destino apos %d\n", resultado); //Mostra mensagem com o resultado
  
  system ("pause");
  return(0);
}
