#include "biblioteca.h"

Biblioteca::Biblioteca(string titulo, string autor, string edicao,string editora, int ano,string isbn, int exemplares, int disponiveis){
	Livro livros(titulo, autor, edicao, editora, ano, isbn, exemplares, disponiveis);
	listaDelivros.emplace_back(livros);
}

void Biblioteca::buscarLivro(string nome);