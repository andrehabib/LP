#ifndef BIB_H
#define BIB_H

#include <random>

using namespace std;

class sapos{
private:
	int identificador;
	static int maximo;
	int quantidade_de_pulos = (rand()%6)+1;
	int distancia_percorrida = 1 + rand()%maximo;

public:
	int calcularDistancia();
	void SetIdentidicador(int indentificador_);
	int GetIdentificador();



};





#endif