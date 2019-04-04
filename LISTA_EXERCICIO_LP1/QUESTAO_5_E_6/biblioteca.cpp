#include "biblioteca.h"

Biblioteca::Biblioteca(string titulo, string autor, string edicao,string editora, int ano,string isbn, int exemplares, int disponiveis){
	Livro livros(titulo, autor, edicao, editora, ano, isbn, exemplares, disponiveis);
	listaDeLivro.emplace_back(livros);
	
}

void Biblioteca::buscarLivro(string nome){
	for (int i = 0; i < listaDeLivro.size(); ++i)
	{
		if(listaDelivro[i].titulo == titulo){
			std::cout << "Titulo: " << listaDelivro[i].titulo << "/ Autor: " << listaDelivro[i].autor << "/ Edição: " << listaDelivro[i].edicao << "/ Ano : " << listaDelivro[i].ano << "/ Isbn: " << listaDelivro[i].isbn << std::endl;
			return;
		} 
	}

}

void Biblioteca::buscarIsbn(string isbn){
	for (int i = 0; i < listaDeLivro.size(); ++i)
	{
		if(listaDelivro[i].isbn == isbn){
			std::cout << "Titulo: " << listaDelivro[i].titulo << "/ Autor: " << listaDelivro[i].autor << "/ Edição: " << listaDelivro[i].edicao << "/ Ano : " << listaDelivro[i].ano << "/ Isbn: " << listaDelivro[i].isbn << std::endl;
			return;
		} 
	}

}

void Biblioteca::verificarExistencia(string titulo, string autor, string edicao,string editora, int ano,string isbn){
	for (int i = 0; i < listaDeLivro.size(); ++i)
	{
		if(listaDeLivro[i].titulo == titulo && listaDeLivro[i].auto == autor && listaDeLivro[i].edicao == edicao && listaDeLivro[i].editora == editora && listaDeLivro[i].ano == ano && listaDeLivro[i].isbn == isbn ){
			std::cout << "Livro existe na biblioteca !!" << std::endl;
			return;
		} 
	}

}

void Biblioteca::buscarQuantiadeDisponivel(string nome){
	for (int i = 0; i < listaDeLivro[i].size(); ++i)
	{
		if(listaDeLivro[i].titulo == nome){
			std::cout << "Quantidade de livros disponíveis: " << listaDeLivro[i].getDisponiveis() << std::endl;
			
		} 
	}
}