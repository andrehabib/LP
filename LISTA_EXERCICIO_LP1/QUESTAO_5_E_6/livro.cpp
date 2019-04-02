#include "livro.h"
#include <string>
#include <iostream>

Livro::Livro(string titulo_, string autor_, string edicao_,string editora_, int ano_,string isbn_);
string Livro::getTitulo();
void Livro::setTitulo(string titulo_);
string Livro::getAutor();
void Livro::setAutor(string autor_);
	string getEdicao();
	void setEdicao(string edicao_);
	string getEditora();
	void setEditora(string editora_);
	int getAno();
	void setAno(int ano_);
	string getIsbn();
	void setIsbn(string isbn_);