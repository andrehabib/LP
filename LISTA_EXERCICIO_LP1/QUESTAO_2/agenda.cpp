#include "agenda.h"

void Agenda::insereContato (string nome_ , int idade_ , float altura_ , string numero_){

	Pessoa pessoa(atualNumeroDeContatos, nome_, idade_, altura_, numero_);
	contatos[Pessoa.id] = pessoa;
	atualNumeroDeContatos++;
	std::cout << "O contato " << nome_ << "foi adicionado com sucesso + (-_-) !" << std::endl;

} 

void Agenda::removeContato ( string nome_ ){
	if(buscaContato(nome_) == -1){
		std::cout<< "Contato para remoção não encontrado (T-T) " << nome_ << " não existe!" << std::endl;
		return;
	}
	contatos[buscaContato(nome_)] = NULL;
	atualNumeroDeContatos --;
}

int Agenda::buscaContato ( string nome_ ){
	for (int i = 0; i < atualNumeroDeContatos; ++i)
	{
		if(contatos[i].nome == nome_) return contatos[i].id;
	}
	return -1;
}