#include "Search.h"


bool Search::Linear( int *List, int Value, unsigned int Size )
{
	if( Size == 0 ) return false;
	if( *List == Value ) return true;
	return Search::Linear( List+1, Value, Size-1 );
}


bool Search::Binary( int *Begin, int *End , int Buscando )
{
	if( End < Begin ) return false;
	
	int *Meio = Begin + (End - Begin)/2;

	std::cout << std::endl << "Valor: ";
	std::cout << std::endl << *Meio << std::endl;

	if( *Meio > Buscando ) return Search::Binary( Begin, Meio-1, Buscando );
	if( *Meio < Buscando ) return Search::Binary( Meio+1, End, Buscando );
	return true;
}

bool Search::LinearComFOR( int *Lista, int Buscando, unsigned int Tamanho )
{
	if( Tamanho == 0 ) return false;
	for( unsigned int i = 0; i < Tamanho; i++)
	{
		std::cout << std::endl << "Valor: ";
		std::cout << std::endl << Lista[i] << std::endl;
		if( Lista[i] == Buscando )
			return true;
	}
	return false;
}


bool Search::BinaryComFOR( int *Comeco, int * Final ,  int Buscando )
{
	if( Comeco > Final ) return false;

	unsigned int Tamanho = (Final - Comeco)+1;
	unsigned int Meio = ( Final - Comeco )/2;

	for( unsigned int i = Tamanho; i > 0; i = (Meio+1))
	{

		if( Buscando < *(Comeco+Meio) )
			Final = Comeco + (Meio-1);
		
		if( Buscando > *(Comeco+Meio) )
			Comeco = Comeco + (Meio+1);

		if ( Buscando == *(Comeco+Meio) )
			return true;
	


		Meio = ( Final - Comeco )/2;
		
	}
	return false;
}
