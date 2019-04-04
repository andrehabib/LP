#ifndef GAME_H
#define GAME_H

#include <iostream> 
#include <string>
#include <vector>
#include <thread>         // std::this_thread::sleep_for.
#include <chrono> 		  //std::chrono::seconds.
#include "sapo.h"		  // recebe a biblioteca sapo.h


class jogo{
	std::vector<Sapo> vetorDeSapo;
	Sapo *apontadorsapo = new Sapo; // aponta para sapo vencedor.

public:
	void adicionarSapo(std::string identificador,int distancia_percorrida = 0, int quantidade_de_pulos = 0){
		Sapo frog(identificador,distancia_percorrida,quantidade_de_pulos); // construtor de sapo.

		vetorDeSapo.emplace_back(frog); // adicona um objeto do tipo sapo ao vetor do tipo sapo. 

	}

	void rodar(){

		unsigned int i= 0; // iterador para o vetor de sapos.
		int marcadordepulo= 1; //marcar o número do pulo durante a corrida .

		for (int k = 3; k > 0 ; --k){

			std::cout << "       " << k << std::endl << std::endl;
			std::this_thread::sleep_for (std::chrono::seconds(1));

		}

		std::cout << "       P U L E M!" << std::endl << std::endl << std::endl;
		std::this_thread::sleep_for (std::chrono::seconds(1));

		while( true ) {

			 vetorDeSapo[i].pular() ;// vetorDeSapo[i].pular(); Faz o sapo da posĩção atual pular.
		
			//Verifica se o sapo da posição atual, chegou ao final da corrida. Se sim, o looping encerra. 
			if(vetorDeSapo[i].getDistanciaPercorrida() >= Sapo::getDistanciaTotalDaCorrida()){

				apontadorsapo = &vetorDeSapo[i]; // atribuindo o sapo vencedor ao apontador.

				break;
			}
		
			std::cout << vetorDeSapo[i].getIdentificador() << std::endl;
			 // imprime os pontos que reprensenta o tamnho da corrida e o "o" que reprensenta a localização do sapo.
			for (int j = 0; j < (Sapo::distanciaTotalDaCorrida -1); ++j) {

		 		std::cout << "." ;

		 		if(j == vetorDeSapo[i].getDistanciaPercorrida())
		 			std::cout << "O" ;
			}

			std::cout << "P" << std::endl << std::endl;

			if(i == (vetorDeSapo.size() -1)){ // Reseta o iterador.
			
				std::cout << "_________________________________________________________________________";
				std::cout << "____________________________________________________" <<  std::endl << std::endl;
				std::this_thread::sleep_for (std::chrono::seconds(1));

				i = 0;

				std::cout << ">>> Etapa: " <<marcadordepulo<<std::endl; // imprime o número da etapa.
				marcadordepulo += 1; // incrementa a etapa

				continue;
			}
			i++; 
		}
	}

	void mostrarVencedor(){

		// interface fim da corrida.
		std::cout << std::endl << std::endl << std::endl <<"--------------------------------------------------";
		std::cout << " ----------------------------------------------------------------------" << std::endl;
		std::cout << "                                             F I M   D A   C O R R I D A      " << std::endl;
		std::cout << "------------------------------------------------------------";
		std::cout << "------------------------------------------------------------" << std::endl;


		//Mostra o resultado da corrida.
		std::cout << ">>>  Vencedor: " <<  apontadorsapo->getIdentificador() << std::endl;
		std::cout << ">>>  Pulos dados: " <<  apontadorsapo->getQtdDePulosDados() << std::endl;
		std::cout << ">>>  Distancia Percorrida: " << apontadorsapo->getDistanciaPercorrida() << std::endl;
	}


};







#endif