#include "jogador.h"

Jogador::Jogador(){
	numero = 0;
	pontos = 0;
}

Jogador::Jogador(const Jogador &jogador){
	numero = jogador.numero;
	pontos = jogador.pontos;
}

Jogador::Jogador(int numero, int pontos){
	this->numero = numero;
	this->pontos = pontos;
}

int Jogador::acumuloDePontos(int dado1, int dado2){
	int soma = dado1 + dado2;
	pontos += soma;

	return pontos;
}

void Jogador::setPontosJogador(int pontos){
	this->pontos = pontos;
}

int Jogador::getPontosJogador(){
	return pontos;
}

int Jogador::getNumeroJogador(){
	return numero;
}