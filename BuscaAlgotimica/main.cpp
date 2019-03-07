#include <iostream>
#include "Search.h"

int main( /* Void */ )
{
	int a[] = { 1,2,3,4,5,6,7 };


	bool result = Search::BinaryComFOR( a, &a[6], 7 );
	if( result ) std::cout << std::endl << std::endl << "Achou" << std::endl << std::endl;
	else std::cout << std::endl << std::endl << "Não Achou" << std::endl << std::endl;

	return 0;
}