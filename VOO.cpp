#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  //declara��o de vari�veis do tipo INTEIRO
  int  distancia, velocidade;
  float resultado;
  float pi = 3.14;  
  printf("Valor de pi %f\n", pi );
  
  printf("Digite a distancia at� o destino: ");
  scanf("%d", &distancia); //recebe um inteiro e armazena na vari�vel distancia
  
  printf("Digite a velocidade m�dia da aeronave: ");
  scanf("%d", &velocidade); //recebe um inteiro e armazena na vari�vel velocidade
  //resultado = distancia / velocidade;
  //Efetua a divis�o da distancia pelo velocidade m�dia e armazena na vari�vel resul
  
  printf("voce chegara ao seu destino apos %d\n", resultado); //Mostra mensagem com o resultado
  
  system ("pause");
  return(0);
}
