#include <iostream>
#include <thread>         
#include <chrono>
#include "jogo.h"

//GRUPO :ANDRÉ HABIB && LUAN ROCHA 

void Jogo::adicionarJogador(int numeroJogador){
	Jogador jogador(numeroJogador,0);
	listaDeJogadores.emplace_back(jogador);
}

int Jogo::mecanica(Jogador verificarJogador){

auto it = listaDeJogadores.begin();

int numero_jogador = verificarJogador.getNumeroJogador();

if(verificarJogador.getPontosJogador() == valorGanhador){
	std::cout << "O vencedor é " << verificarJogador.getNumeroJogador() <<std::endl;	
	return 1;	
}
if(verificarJogador.getPontosJogador()  < valorGanhador){
   std::cout << "O jogador " << verificarJogador.getNumeroJogador() << " ainda pode jogar" << std::endl;
}
if (verificarJogador.getPontosJogador()  > valorGanhador){
	std::cout << "O jogador " << verificarJogador.getNumeroJogador() << " ta fora do jogo" << std::endl;

	while(it != listaDeJogadores.end()){
	if(it->getNumeroJogador() == numero_jogador){ // no exemplo, estamos excluindo o jogador com id 3 mas se fosse uma função isso poderia sere uma variável
		listaDeJogadores.erase(it); // passa pro método erase um ponteiro pra posição a ser excluída da lista
		break; // se achou, cancele o for pois, no exemplo, estamos ecluindo um jogador bem específico
	}

	it++; // se não, avança o iterador;

	}

	return 2;
	}

return 0;

}

int Jogo::interface(int quantidadeJogadores){

int controlador = 0;

int saida_while = 0;

Dado dados(1,6);

LancamentoDuplo duplo = dados.lancamento2();

while(saida_while!= 5){	

for(int i = 0; i < quantidadeJogadores; i++){

	if(quantidadeJogadores == 1){
		std::cout << "O vencedor é " << listaDeJogadores[i].getNumeroJogador() <<std::endl;	
		std::cout << "O jogo acabou !!" <<std::endl;
		saida_while = 5;
		return 0;	
		break;	
	}	
	
	std::cout<< "Jogador:" << listaDeJogadores[i].getNumeroJogador() << " vai jogar ? caso jogue digite 1, caso queira parar digite 2!" << std::endl;
	std::cin>>controlador;

	if(controlador == 1){
		std::cout<< "Jogador:" << listaDeJogadores[i].getNumeroJogador() << " Lançou os dados: " <<  duplo.first << "/" << duplo.second << std::endl;
		std::this_thread::sleep_for (std::chrono::seconds(1));
		listaDeJogadores[i].acumuloDePontos(duplo.first,duplo.second);
	}

	std::cout<<" O jogador: "<< listaDeJogadores[i].getNumeroJogador()<< " -- Valor de pontos do jogador: " << listaDeJogadores[i].getPontosJogador() << std::endl;

	switch(mecanica(listaDeJogadores[i])){
		case 1:
			std::cout << "O jogo acabou !!" <<std::endl;
			saida_while = 5;
			return 0;
			break;
			
		case 2:
			quantidadeJogadores --;
			break;
	}
}
}
return 0;
}



	

