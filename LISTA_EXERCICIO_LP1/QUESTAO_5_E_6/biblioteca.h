#ifndef biblioteca_h
#define biblioteca_h
#include "livro.h"
#include <vector>
#include <string>

using std::string;

class Biblioteca{

private:

	std::vector<Livro> listaDeLivro; 
	int totalDeLivros;

public:
	Biblioteca(string titulo, string autor, string edicao,string editora, int ano,string isbn, int exemplares, int disponiveis);
	void buscarLivro(string nome);
	void buscarIsbn(string isbn);
	void verificarExistencia(string titulo, string autor, string edicao, string editora, int ano, string isbn);
	void buscarQuantiadeDisponivel(string nome);

};

#endif