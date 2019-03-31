#ifndef jogo_h
#define jogo_h

#include <vector>
#include "jogador.h"
#include "dado.h" 
class Jogo{

private:
	std::vector<Jogador> listaDeJogadores;
public:


	static int valorGanhador; // vaŕiável estática

	void adicionarJogador(int numeroJogador);

	int mecanica(Jogador verificarJogador);

	int interface(int quantidadeJogadores);

};

#endif