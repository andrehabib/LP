/**
* @file Fruta.cpp
* @brief Métodos da Classe Fruta
*/

/** @brief Inclui a biblioteca Fruta.h */
#include "../include/fruta.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Fruta::Fruta(void){}

/**
* @brief Método construtor padronizado.
* @param  m_codigo_de_barra, m_descricao, m_preco, m_teor.
* @return Não possui retorno
*/
Fruta::Fruta(double m_codigo_de_barras, string m_descricao, double m_preco, int m_tipo, Date m_data_do_lote, Date m_validade):
	Produto(m_codigo_de_barras, m_descricao, m_preco, m_tipo), m_data_do_lote(m_data_do_lote), m_validade(m_validade) {}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Fruta::~Fruta(){}

/** @brief Implementação do método de impressão de uma Fruta*/
void Fruta::imprime(){

		std::cout << "Código de barras: " << m_codigo_de_barras << " Descrição: " << m_descricao << " Preço: " << m_preco 
	<< " Data do lote: " << m_data_do_lote << " Data de validade: " << m_validade << std::endl;

}


/** @brief Setters */
	void Fruta::setM_codigo(double codigo){
		m_codigo_de_barras = codigo;
	}
	void Fruta::setM_descricao(string descricao_){
		m_descricao = descricao_;
	}
	void Fruta::setM_preco(double preco_){
		m_preco = preco_;
	}
	void Fruta::setM_data(Date data_){
		m_data_do_lote = data_;
	}
	void Fruta::setM_validade(Date validade_){
		m_validade = validade_;
	}
	void Fruta::setM_tipo(int tipo_){
		m_tipo = tipo_;
	}




/** @brief Getters */
	double Fruta::getM_codigo(){
		return m_codigo_de_barras;
	}
	string Fruta::getM_descricao(){
		return m_descricao;
	}
	double Fruta::getM_preco(){
		return m_preco;
	}
	Date Fruta::getM_data(){
		return m_data_do_lote;
	}
	Date Fruta::getM_validade(){
		return m_validade;
	}
	int Fruta::getM_tipo(){
		return m_tipo;
	}