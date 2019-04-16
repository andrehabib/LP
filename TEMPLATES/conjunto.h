
#include <iostream>
#include <cstring>
#include <vector>

template <typename T>
class Conjunto {
private:

	std::vector<T> listaConjuntos;

public:

	Conjunto(void);
	void adicionar(T elemento);
	void adicionar(Conjunto &novoConjunto);
	void imprimir();
	int total();

	Conjunto operator+(Conjunto &a);
	Conjunto operator*(Conjunto &a);
	Conjunto operator-(Conjunto &a);


};

