#include "carro.h"

Carro::Carro( string modelo, int ano, float combustivelMaximo, float distanciaPorLitro){
	this->modelo = modelo;
	this->ano = ano;
	this->combustivelMaximo = combustivelMaximo;
	this->distanciaPorLitro = distanciaPorLitro;

	std::cout<< "O carro criado foi um " << modelo << ", ano " << ano << ". Suporta " << combustivelMaximo << " e consome " << distanciaPorLitro << std::endl;

}

float Carro::getDistanciaPercorrida(){
	return distanciaPercorrida;
}

float Carro::getAutonomia(){
	return quantidadeCombustivel*distanciaPorLitro;
}

float Carro::getQuantidadeCombustivel(){
	return quantidadeCombustivel;
}

float Carro::mover(float andar){

	if(quantidadeCombustivel > 1.0){
		float quantidadeDeLitros = andar/distanciaPorLitro;
		if(quantidadeDeLitros<=quantidadeCombustivel){
			quantidadeCombustivel-= quantidadeDeLitros;
			distanciaPercorrida += andar;
		}

	}
	else{
		std::cout<< "Não temos combustivel !" << std::endl;
	}
	return 0;
}

float Carro::abastecer(float litros){
	float somaDeLitros = litros + quantidadeCombustivel;
	if(somaDeLitros <=combustivelMaximo){
		quantidadeCombustivel = somaDeLitros;
		std::cout<< "Abestecido !" << std::endl;
	}
	else{
		std::cout<< "Capacidade excedida !" << std::endl;
	}
	return 0;
}