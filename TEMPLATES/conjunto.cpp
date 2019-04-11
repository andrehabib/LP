#include "conjunto.h"

template<class T>
Conjunto<T>::Conjunto(void){	
}

template<typename T>
void Conjunto<T>::adicionar(T elemento) {
	listaConjuntos.push_back(elemento);
	std::cout << "Elemnto: " << listaConjuntos << "foi adicionado !" << std::endl;
	return;
}

T Conjunto<T>::adicionar(T elemento) {
	for (auto &listaConjuntos : )
	{
		/* code */
	}
	listaConjuntos.push_back(elemento);
	std::cout << "Elemnto: " << listaConjuntos << "foi adicionado !" << std::endl;
	return;
}

emplate<typename T>
void Conjunto<T>::imprimir() {

	std::cout << "Elemnto: " << listaConjuntos << "foi adicionado !" << std::endl;
	return;
}

template<class T>
int Conjunto<T>::total() {
	
	return listaConjuntos.size();
}

void Conjunto::Conjunto operator+(Conjunto &a){
	for (auto &row : a)
	{
		a.push_back(a);
		
	}
}