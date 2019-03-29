#include "jogador.h"
#include "dado.h" 
#include <iostream>



Jogo::acumuloDePontos(int dado1, int dado2){
	int soma = dado1 + dado2;
	pontosJogador += soma;

	//return verificar(pontosJogador);


}

//Jogo::verificar(int valor){
	//if(valor == pontoGanhador){
		//return true;
	//}
	//if(valor > pontoGanhador){
		//return false;
	//}
	//if(valor< pontoGanhador){
		//return false;
	//}
//}

//Jogo::mecanica(bool valorVerificado, Jogo &ponteiro){
	//if(valorVerificado == true){
		//std::cout << "O vencedor é " << ponteiro->getNumeroJogador() <<std::endl;
		
	//}

//}

