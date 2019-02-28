#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <random>
#include "bib.h"



int sapos::calcularDistancia(){
	int total_de_pulos = 0;
	while(quantidade_de_pulos>=quantidade_puladas){
		total_de_pulos += quantidade_puladas;
	}

	return total_de_pulos;
}
void sapos::SetIdentidicador(int indentificador_){
	indentificador = indentificador_;
}

int sapos::GetIdentificador(){
	return indentificador;
}