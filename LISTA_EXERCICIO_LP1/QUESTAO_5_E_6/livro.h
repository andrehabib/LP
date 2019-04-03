#ifndef livro_h
#define livro_h

#include <iostream>
#include <string>

using std::string;

class Livro{
private:
	string titulo;	
	string autor;
	string edicao;
	string editora;
	int ano;
	string isbn;
	int exemplares;
	int disponiveis;

public:
	Livro(string titulo_, string autor_, string edicao_, string editora_, int ano_, string isbn_, int exemplares_, int disponiveis_);
	string getTitulo();
	void setTitulo(string titulo_);
	string getAutor();
	void setAutor(string autor_);
	string getEdicao();
	void setEdicao(string edicao_);
	string getEditora();
	void setEditora(string editora_);
	int getAno();
	void setAno(int ano_);
	string getIsbn();
	void setIsbn(string isbn_);

	friend std::ostream& operator<<(std::ostream &saida, const Livro& l);

};

	std::ostream& operator<<(std::ostream &saida, const Livro& l){
		saida << "Titulo: " << l.titulo << " Autor: " << l.autor << " Edição: " << l.edicao << " Ano : " << l.ano << " Isbn: " << l.isbn;

		return saida;
	}
	
#endif
