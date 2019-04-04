#include "biblioteca.h"
#include <string>
#include <iostream>
#include <string>

using std::string;

int main(){

	int x = 0; // controlador de saída.


	while(x!=6){

		std::cout<< "Digite uma das opções abaixo apra ser executada       !" <<std::endl;
		std::cout<< "1 - Adicionar livro                                   !" <<std::endl;
		std::cout<< "2 - Buscar livros pelo nome                           !" <<std::endl;
		std::cout<< "3 - Buscar livros pelo isbn                           !" <<std::endl;
		std::cout<< "4 - Verificar Se um livro existe na biblioteca        !" <<std::endl;
		std::cout<< "5 - Verificar a quantidade disponível para empréstimo !" <<std::endl;
		std::cout<< "6 - Sair do programa  								   !" <<std::endl;
		std::cin >>x;

		switch(x){
			case 1:
				string titulo;	
				string autor;
				string edicao;
				string editora;
				int ano;
				string isbn;
				int exemplares;
				int disponiveis;

				std::cout<< "Digite o titulo do livro                   :" <<std::endl;
				std::cin>> titulo;

				std::cout<< "Digite o autor do livro                    :" <<std::endl;
				std::cin>> autor;

				std::cout<< "Digite a edição do livro                   :" <<std::endl;
				std::cin>> edicao;

				std::cout<< "Digite a editora do livro                  :" <<std::endl;
				std::cin>> editora; 

				std::cout<< "Digite o ano do livro                      :" <<std::endl;
				std::cin>> ano;

				std::cout<< "Digite o isbn do livro                     :" <<std::endl;
				std::cin>> isbn;

				std::cout<< "Digite a quantidade de exemplares do livro :" <<std::endl;
				std::cin>> exemplares;

				std::cout<< "Digite a quantidade disponíveis do livro   :" <<std::endl;
				std::cin>> disponiveis;


				Biblioteca livro(titulo, autor, edicao, editora, ano, isbn, exemplares, disponiveis);

			break;

			case 2:
		
				std::cout<< "Digite o titulo do livro :" <<std::endl;
				std::cin>> titulo;
				livro.buscarLivro(titulo);

			break;

			case 3:
				std::cout<< "Digite o isbn do livro :" <<std::endl;
				std::cin>> isbn;
				livro.buscarIsbn(isbn);

			break;

			case 4:

				std::cout<< "Digite o titulo do livro                   :" <<std::endl;
				std::cin>> titulo;

				std::cout<< "Digite o autor do livro                    :" <<std::endl;
				std::cin>> autor;

				std::cout<< "Digite a edição do livro                   :" <<std::endl;
				std::cin>> edicao;

				std::cout<< "Digite a editora do livro                  :" <<std::endl;
				std::cin>> editora; 

				std::cout<< "Digite o ano do livro                      :" <<std::endl;
				std::cin>> ano;

				std::cout<< "Digite o isbn do livro                     :" <<std::endl;
				std::cin>> isbn;

				livro.verificarExistencia(titulo, autor, edicao, editora, ano, isbn);

			break;

			case 5:
				std::cout<< "Digite o titulo do livro :" <<std::endl;
				std::cin>> titulo;
				livro.buscarQuantiadeDisponivel(titulo);

			break;

		}
	}


	return 0;
}