#include "conjunto.h"

template<class T>
Conjunto<T>::Conjunto(void){	
}

template<typename T>
void Conjunto<T>::adicionar(Conjunto &novoConjunto) {
	for (auto& row : listaConjuntos)
	{
		this->listaConjuntos.push_back(row);
		std::cout << "Elemento: " << this->listaConjuntos.push_back(row) << "foi adicionado !" << std::endl;
	}
	
	return;
}

T Conjunto<T>::adicionar(T elemento) {
	
	this->listaConjuntos.push_back(elemento);
	char elemento_ = this->listaConjuntos.push_back(elemento);
	std::cout << "Elemento: " << elemento_ << "foi adicionado !" << std::endl;
	return;
}

emplate<typename T>
void Conjunto<T>::imprimir() {

	std::cout << "Elementos do Conjunto: [ ";

	for(auto &row : this->pool) {
		std::cout << "Elemnto: " << row << "foi adicionado !" << std::endl;
	}

	std::cout << " ]" << std::endl;

	return;
}

template<class T>
int Conjunto<T>::total() {
	
	return this->listaConjuntos.size();
}

void Conjunto::Conjunto operator+(Conjunto &a){
	for (auto &row : a)
	{
		a.push_back(a);
		
	}
}