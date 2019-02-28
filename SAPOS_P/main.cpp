#include <stdio.h>
#include "bib.h"
#include <random>
int main(){
	sapos andre;
	sapos elyton;
	sapos lucas;

	andre.setIdentificador(1);
	elyton.setIdentificador(2);
	lucas.setIdentificador(3);

	sapos::maximo = 100;

	cout<<"Quantiade de pulos de elyton:"<<elyton.CalcularDistancia()<<endl;
	cout<<"Quantiade de pulos de Andre:"<<andre.CalcularDistancia()<<endl;
	cout<<"Quantiade de pulos de lucas:"<<lucas.CalcularDistancia()<<endl;

	return 0;

}