#ifndef biblioteca_h
#define biblioteca_h
#include "livro.h"
#include 
class Biblioteca{

private:
	std::vector<Livro> listaDeLivro; 

public:
	Biblioteca(string titulo, string autor, string edicao,string editora, int ano,string isbn, int exemplares, int disponiveis);
	void buscarLivro(string nome);

};

#endif