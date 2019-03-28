#include "jogo.h"
#include "dado.h"

Jogo::Jogo(){
	int numeroJogador = 0;
	int pontosJogador = 0;
}

Jogo::acumuloDePontos(int dado1, int dado2){
	int soma = dado1 + dado2;
	pontosJogador += soma;

	verificar(pontosJogador);

}

Jogo::verificar(int valor){

}