#include "conjunto.h"

template <typename T>
Conjunto<T>::Conjunto(void){

}

template <typename T>
void Conjunto<T>::adicionar(Conjunto<T> &novoConjunto) {
	for (auto& row : listaConjuntos)
	{
		this->listaConjuntos.push_back(row);
		std::cout << "Elemento: " << this->listaConjuntos.push_back(row) << "foi adicionado !" << std::endl;
	}
}

template <typename T>
void Conjunto<T>::adicionar(T elemento) {
	
	this->listaConjuntos.push_back(elemento);
	char elemento_ = this->listaConjuntos.push_back(elemento);
	std::cout << "Elemento: " << elemento_ << "foi adicionado !" << std::endl;
	
}

template <typename T>
void Conjunto<T>::imprimir() {

	std::cout << "Elementos do Conjunto: [ ";

	for(auto &row : this->pool) {
		std::cout << "Elemnto: " << row << "foi adicionado !" << std::endl;
	}

	std::cout << " ]" << std::endl;

	return;
}

template <typename T>
int Conjunto<T>::total() {
	
	return this->listaConjuntos.size();
}

// template<typename T>
// Conjunto<T> Conjunto<T>::operator+(Conjunto<T> &a){
// 	for (auto &row : a)
// 	{
// 		listaConjuntos.push_back(row);
// 	}
// }

// template <typename T>
// Conjunto<T> Conjunto<T>::operator-(Conjunto<T> &a){
// 	for (auto &row : a)
// 	{
// 		for (auto &row1 : listaConjuntos)
// 		{
// 			if(listaConjuntos[row] == a[row1]){
// 			listaConjuntos == NULL;
// 		}
		
// 		}
// 	}
// }

// template <typename T>
// Conjunto<T> Conjunto<T>::operator*(Conjunto<T> &a){
// 	for (auto &row : a)
// 	{
		
// 	}
// }

