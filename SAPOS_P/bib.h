#ifndef BIB_H
#define BIB_H
#include<iostream>
#include <random>

using namespace std;

class sapos{
private:
	int identificador;
	int maximo_do_pulo;
	int distancia_percorrida;

public:
	static int distancia_total;
	int pulo();
	sapos(int, int );

};





#endif