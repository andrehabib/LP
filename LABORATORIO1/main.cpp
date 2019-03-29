#include <iostream> 
#include "jogador.h" //incluido biblioteca "jogo.h" para utilizar sua funções.

int Jogo::valorGanhador = 20;  //atribuindo valor a variável estática pertecente a classe jogo.

int main(){
	
	Dado dados(1,6);

	int dado1=0,dado2=0;

	LancamentoDuplo duplo= dados.lancamento2();

	vector <Jogo> listaJogo;

	listaJogo.emplace_back(1,0);
	listaJogo.emplace_back(2,0);
	listaJogo.emplace_back(3,0);



	for (int i = 0; i < 3; ++i)
	{
		ponteiroDeJogo = &listaJogo[i];
		std::cout<<"Lançamento do jogador:"<<ponteiroDeJogo->getNumeroJogador() << dado1 = duplo.first << "/"<< dado2 = duplo.second << std::endl;
		acumuloDePontos(dado1,dado2);
		//mecanica(listaJogo[i].acumuloDePontos(),ponteiroDeJogo);
		std::cout<<"Numero de pontos do jogador "<< ponteiroDeJogo->getNumeroJogador()<< ":" << listaJogo[i].pontosJogador << std::endl;
	}




	



	return 0;
}