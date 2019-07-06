/**
* @file roupa.cpp
* @brief Métodos da Classe Roupa
*/

/** @brief Inclui a biblioteca roupa.h */
#include "../include/roupa.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Roupa::Roupa(void){}

/**
* @brief Método construtor padronizado.
* @param  m_codigo_de_barra, m_descricao, m_preco, m_marca, m_sexo, m_tamanho.
* @return Não possui retorno
*/
Roupa::Roupa(double m_codigo_de_barras, string m_descricao, double m_preco, string m_marca, char m_sexo, string m_tamanho):
	Produto(m_codigo_de_barras, m_descricao, m_preco), m_marca(m_marca), m_sexo(m_sexo), m_tamanho(m_tamanho) {}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Roupa::~Roupa(){}

/** @brief Implementação do método de impressão de uma Roupa*/
void Roupa::imprime(){

		std::cout << "Código de barras: " << m_codigo_de_barras << " Descrição: " << m_descricao << " Preço: " << m_preco 
	<< " Marca: " << m_marca << " Sexo: " << m_sexo << " Tamanho: " << m_tamanho << std::endl;

}


/** @brief Setters */
	void Roupa::setM_codigo(double codigo){
		m_codigo_de_barras = codigo;
	}
	void Roupa::setM_descricao(string descricao_){
		m_descricao = descricao_;
	}
	void Roupa::setM_preco(double preco_){
		m_preco = preco_;
	}
	void Roupa::setM_marca(string marca_){
		m_marca = m_marca;
	}
	void Roupa::setM_sexo(char sexo_){
		m_sexo = m_sexo;
	}
	void Roupa::setM_tamanho(string tamanho_){
		m_tamanho = m_tamanho;
	}



/** @brief Getters */
	double Roupa::getM_codigo(){
		return m_codigo_de_barras;
	}
	string Roupa::getM_descricao(){
		return m_descricao;
	}
	double Roupa::getM_preco(){
		return m_preco;
	}
	string Roupa::getM_marca(){
		return m_marca;
	}
	char Roupa::getM_sexo(){
		return m_sexo;
	}
	string Roupa::getM_tamanho(){
		return m_tamanho;
	}
