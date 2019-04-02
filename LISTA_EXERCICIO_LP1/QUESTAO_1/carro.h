#include <iostream>
#include <string>


using std::string;

class Carro{

private:
	string modelo;
	int ano = 0000;
	float combustivelMaximo = 0;
	float distanciaPorLitro = 0;
	float distanciaPercorrida = 0;
	float autonomia = 0;
	float quantidadeCombustivel = 0;
public:
	Carro(void) = delete;
	Carro( string modelo, int ano, float combustivelMaximo, float distanciaPorLitro);

	float getDistanciaPercorrida();
	float getAutonomia();
	float getQuantidadeCombustivel();
	float mover(float andar);
	float abastecer(float litros);


};
