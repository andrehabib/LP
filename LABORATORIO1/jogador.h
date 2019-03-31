#ifndef jogador_h
#define jogador_h
#include <vector>

class Jogador{

private:
	int numero;
	int pontos;

public:

	Jogador(); // construto padrão.

	Jogador(const Jogador &jogador); // construto cópia.

	Jogador(int numero, int pontos);  

	void setPontosJogador(int pontos);

	int getPontosJogador();

	int getNumeroJogador();

	int acumuloDePontos(int dado1, int dado2);

};

#endif