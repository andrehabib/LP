#ifndef GAME_H
#define GAME_H

#include <iostream> 
#include <string>
#include <vector>
#include <thread>         // std::this_thread::sleep_for
#include <chrono> 		  //std::chrono::seconds
#include "sapo.h"


class jogo{
	std::vector<Sapo> vetorDeSapo;
	int resultado;
public:
	void adicionarSapo(std::string identificador,int distancia_percorrida = 0, int quantidade_de_pulos = 0){
		Sapo frog(identificador,distancia_percorrida,quantidade_de_pulos);

		vetorDeSapo.emplace_back(frog);

	}

	void rodar(){

		unsigned int i= 0; // iterador para o vetor de sapos
		int vencedor = 0; // posição no vetor de sapos do vencedor da corrida.
		int marcadordepulo= 1; //marcar o número do pulo durante a corrida 

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

				vencedor = i; //Guarda a posição do vencedor.	
				break;
			}
		
			std::cout << vetorDeSapo[i].getIdentificador() << std::endl;

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

				std::cout << ">>> Etapa: " <<marcadordepulo<<std::endl;
				marcadordepulo += 1;

				continue;
			}
			i++; 

			resultado = vencedor;
		}
	}

	void mostrarVencedor(){
		std::cout << std::endl << std::endl << std::endl <<"--------------------------------------------------";
		std::cout << " ----------------------------------------------------------------------" << std::endl;
		std::cout << "                                             F I M   D A   C O R R I D A      " << std::endl;
		std::cout << "------------------------------------------------------------";
		std::cout << "------------------------------------------------------------" << std::endl;


		//Mostra o resultado da corrida.
		std::cout << ">>>  Vencedor: " <<  vetorDeSapo[resultado].getIdentificador() << std::endl;
		std::cout << ">>>  Pulos dados: " <<  vetorDeSapo[resultado].getQtdDePulosDados() << std::endl;
		std::cout << ">>>  Distancia Percorrida: " << vetorDeSapo[resultado].getDistanciaPercorrida() << std::endl;
	}


};







#endif