#include <iostream>
#include "dado.h"
#include "jogo.h"

int main(){
	
	Dado dados(1,6);

	LancamentoDuplo duplo= dados.lancamento2();

	

	std::cout<<"Lançamento:" <<duplo.first << "/"<< duplo.second << std::endl;

	return 0;
}