#ifndef jogador_h
#define jogador_h
#include "jogo.h"

class Jogador{

private:
	int numero;
	int pontos;

public:

	Jogador(); // construto padrão.

	Jogador(const Jogador &jogador); // construto cópia.

	Jogador(int numero, int pontos); // construto parametizado. 

	int setPontosJogador(int pontos);

	void getPontosJogador();

	void getNumeroJogador();

};

#endif