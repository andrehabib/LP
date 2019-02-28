#include <iostream>
#include "bib.h"


using namespace std;

int sapos::distancia_total = 100;

int main(){
	sapos andre(1,5);
	sapos elyton(2,5);
	sapos lucas(3,5);


	
	cout<<"Quantidade de pulos de elyton:"<<elyton.pulo()<<endl;
	cout<<"Quantidade de pulos de Andre:"<<andre.pulo()<<endl;
	cout<<"Quantidade de pulos de lucas:"<<lucas.pulo()<<endl;

	return 0;

}