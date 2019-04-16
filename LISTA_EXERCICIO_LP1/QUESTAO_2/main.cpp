#include "agenda.h"
#include <string>
int main(){

	Agenda pessoa;
	int x=0; // x é o controlador;
	std::string nome;
	int idade;
	float altura;
	std::string numero;

	while(x!=6){
		std::cout << "Digite a opção desejada :" << std::endl;
		std::cout << "1 - Inserir contato  :" << std::endl;
		std::cout << "2 - Remover contato  :" << std::endl;
		std::cout << "3 - Listar contaotos :" << std::endl;
		std::cout << "4 - Buscar contato   :" << std::endl;
		std::cout << "5 - Mostar detalhes  :" << std::endl;
		std::cout << "6 - Sair do programa  :" << std::endl;

		switch(x){
			case 1:
				std::cout << "Digite o nome do contato:" << std::endl;
				std::cin>>nome;
				td::cout << "Digite a idade do contato:" << std::endl;
				std::cin>>idade;
				td::cout << "Digite a altura do contato:" << std::endl;
				std::cin>>altura;
				td::cout << "Digite :" << std::endl;
				std::cin>>numero;
				pessoa.insereontato(nome,idade,altura,numero);

				break;

			case 2:
				std::cout << "Digite o nome do contato:" << std::endl;
				std::cin>>nome;
				pessoa.removeContato(nome);

				break;

			case 3:
				pessoa.listaContato();

				break;

			case 4:
				std::cout << "Digite o nome do contato:" << std::endl;
				std::cin>>nome;
				pessoa.buscaContato(nome);

				break;

			case 5:
				std::cout << "Digite o nome do contato:" << std::endl;
				std::cin>>nome;
				pessoa.imprimeContato(nome);

				break;

			case 6:
				x = 6;

				break;
		}

	}
	
	return 0;
}