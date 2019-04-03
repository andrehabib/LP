#include "livro.h"


Livro::Livro(string titulo_, string autor_, string edicao_, string editora_, int ano_, string isbn_, int exemplares_, int disponiveis_){
	titulo = titulo_;
	autor = autor_;
	edicao = edicao_;
	editora = editora_;
	ano = ano_;
	isbn = isbn_;
	exemplares = exemplares_;
	disponiveis = disponiveis_;

}

string Livro::getTitulo(){
	return titulo;
}

void Livro::setTitulo(string titulo_){
	titulo = titulo_;
}

string Livro::getAutor(){
	return autor;
}

void Livro::setAutor(string autor_){
	autor = autor_;
}

string Livro::getEdicao(){
	return edicao;
}

void Livro::setEdicao(string edicao_){
	edicao = edicao_;
}

string Livro::getEditora(){
	return editora;
}

void Livro::setEditora(string editora_){
	editora = editora_;
}

int Livro::getAno(){
	return ano;
}

void Livro::setAno(int ano_){
	ano = ano_;
}
string Livro::getIsbn(){
	return isbn;
}
void Livro::setIsbn(string isbn_){
	isbn = isbn_;
}