#include "bib.h"

int sapos::pulo(){
	int quantidade_de_pulos = 6;
	//int tamanho = distancia_total;

	/*while(tamanho>0){
		tamanho -= distancia_percorrida;
		quantidade_de_pulos ++;
	}
*/
	return quantidade_de_pulos;
}

sapos::sapos(int Identificador_construtor, int maximo_do_pulo_){
	identificador = Identificador_construtor;
	maximo_do_pulo = maximo_do_pulo_;
}