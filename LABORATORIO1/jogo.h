#ifndef jogo_h
#define jogo_h

#include <vector>
#include "jogador.h"

class Jogo{

private:
	Jogador *ponteiroJogador = new Jogador; 
	vector<Jogador> listaDeJogadores;

public:

	static int valorGanhador; // vaŕiável estática

	Jogo(); // construto padrão.

	Jogo(const Jogo &jogo); // construto cópia.

	Jogo(int numeroJogador, int pontosJogador); // construto parametizado. 

};

#endif