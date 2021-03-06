
#ifndef DADO_H
#define DADO_H

#include <random>

class Dado {
	private:
		// Cria um objeto para um dispositivo de randomização ( cria um randomizador )
		std::random_device Randomizador; 

		// Cria um gerador de números aleatórios 
		std::default_random_engine Gerador;

		//Define o intervalo dos numéros aleatórios
		std::uniform_real_distribution<float> Distribuicao;
		

	public:
		Dado( int Menor = 1, int Maior = 6 ) : 
			Randomizador (), 
			Gerador ( Randomizador() ), 
			Distribuicao ( Menor, Maior+1 )
		{ /* Vazio */ }

		//Retorna um número aleatório no intervalo de distribuição
		int aleatorio()
		{
			return std::floor( Distribuicao(Gerador) );
		}
};

#endif