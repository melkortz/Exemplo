#include <iostream>
#include <stdlib.h>

/*====================================
*     Script by Melkortz/VVLGATAE
*          twitter/melkortz
* ====================================*/
 /*Nesse exemplo vamos realizar a operação de duas formas diferentes*/ 
using namespace std;

int main() {
	    //Declaração de variaveis do tipo REAL 
    float DISTANCIA_REAL, VELOCIDADE_REAL, RESUL_REAL;
    
	
    cout << "Seja bem vindo ao calculo de tempo de voo" << endl;
    
    
    //Solicitando a entrada do primeiro valor
	cout << "Digite a distancia até o destino " << endl;
	
    //Guardando o Valor em duas variaveis
	cin >>  DISTANCIA_REAL;
    
	//Solicitando a entrada do Segundo valor
    cout << "Digite a velocidade média da aeronave " << endl;
    
    //Guardando o valor em duas variaveis
	cin >> VELOCIDADE_REAL;
	
	
	//No primeiro exemplo nós vamos fazer a operação direto na mensagem de resposta usando as duas variaveis do tipo REAL
    cout << "Voce chegara ao seu destino apos " << DISTANCIA_REAL / VELOCIDADE_REAL << "  horas de voo" << endl;
    
    //No segundo exemplo nos vamos fazer a operação fora da mensagem e depois exibir a variavel que armazenou o resultado da operação
    
    RESUL_REAL = DISTANCIA_REAL / VELOCIDADE_REAL;
    cout << "Voce chegara ao seu destino apos " <<  RESUL_REAL  << "  horas de voo" << endl;

    


    system("pause");
    return 0;
}
