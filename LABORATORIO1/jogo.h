#ifndef jogo_h
#define jogo_h

#include "dado.h"
#include <string>
#include <iostream>

class Jogo{

private:
	int numeroJogador;
	int pontosJogador;

public:

	Jogo();

	Jogo(int numeroJogador, int pontosJogador);

	int setPontosJogador(int pontosJogador);

	void getPontosJogador();

};

#endif