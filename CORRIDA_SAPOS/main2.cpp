#include "sapo.h"
#include "jogo.h"
#include <vector>
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono> 		//std::chrono::seconds


int Sapo::distanciaTotalDaCorrida = 100; // Define o tamanho do trajeto a ser percorrido.
int Sapo::tamanhoDoPulo = 10; // Define o tamanho do pulo máximo dos sapos.

int main() {

	int nsapos = 0; //variavel responsavel por guaradar quantidade de sapos

	jogo game;

	std::cout<< "Quantidade de sapos da corrida:" << std::endl; // pedindo quantiade de sapos
	std::cin >> nsapos; // recebendo variavel

	std::string vetornome[nsapos]; // vetor com os nome dos sapos que seu tamanho é determinado pelo 

	for (int i = 0; i < nsapos; ++i)
	{
		std::cout << "Digite o nome do sapo " <<  i+1 << " :" << std::endl;
		std::cin >> vetornome[i];
		game.adicionarSapo(vetornome[i]); 
	}

	game.rodar();

	game.mostrarVencedor();
}