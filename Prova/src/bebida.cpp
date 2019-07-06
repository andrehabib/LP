/**
* @file bebida.cpp
* @brief Métodos da Classe Bebida
*/

/** @brief Inclui a biblioteca Bebida.h */
#include "../include/bebida.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Bebida::Bebida(void){}

/**
* @brief Método construtor padronizado.
* @param  m_codigo_de_barra, m_descricao, m_preco, m_teor.
* @return Não possui retorno
*/
Bebida::Bebida(double m_codigo_de_barras, string m_descricao, double m_preco, double m_teor_alcoolico):
	Produto(m_codigo_de_barras, m_descricao, m_preco), m_teor_alcoolico(m_teor_alcoolico) {}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Bebida::~Bebida(){}

/** @brief Implementação do método de impressão de uma Bebida*/
void Bebida::imprime(){

	std::cout << "Código de barras: " << m_codigo_de_barras << " Descrição: " << m_descricao << " Preço: " << m_preco 
	<< " Teor alcoolico: " << m_teor_alcoolico << std::endl;

}

/** @brief Setters */
	void Bebida::setM_codigo(double codigo){
		m_codigo_de_barras = codigo;
	}
	void Bebida::setM_descricao(string descricao_){
		m_descricao = descricao_;
	}
	void Bebida::setM_preco(double preco_){
		m_preco = preco_;
	}
	void Bebida::setM_teor(double teor){
		m_teor_alcoolico = teor;
	}




/** @brief Getters */
	double Bebida::getM_codigo(){
		return m_codigo_de_barras;
	}
	string Bebida::getM_descricao(){
		return m_descricao;
	}
	double Bebida::getM_preco(){
		return m_preco;
	}
	double Bebida::getM_teor(){
		return m_teor_alcoolico;
	}
