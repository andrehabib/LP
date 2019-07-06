/**
* @file produto.cpp
* @brief Métodos da Classe Produto
*/

/** @brief Inclui a biblioteca Produto.h */
#include "../include/produto.h"

/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/
Produto::Produto(void){}

/**
* @brief Método construtor padronizado.
* @param  m_codigo, m_descricao, m_preco.
* @return Não possui retorno
*/
Produto::Produto(double codigo_de_barras, std::string descricao, double preco ): m_codigo_de_barras(codigo_de_barras), 
m_descricao(descricao), m_preco(preco){}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Produto::~Produto(){}

/** @brief Definindo o método de sobrecarga pra soma */
	double Produto::operator+ (Produto &reajuste){
		double novoPreco = m_preco + reajuste.m_preco;

		return novoPreco;
	}

	/** @brief Definindo o método de sobrecarga pra subtração */
	double Produto::operator- (Produto &reajuste){
		double novoPreco = m_preco - reajuste.m_preco;

		return novoPreco;

	}

	/** @brief Definindo o método de sobrecarga pra subtração */
	bool Produto::operator== (Produto &iguais){
		if(m_codigo_de_barras == iguais.m_codigo_de_barras){
			return 0;
		}
		else{
			return 1;
		}
	}

/** @brief Setters */
	void Produto::setM_codigo(double codigo){
		m_codigo_de_barras = codigo;
	}
	void Produto::setM_descricao(string descricao_){
		m_descricao = descricao_;
	}
	void Produto::setM_preco(double preco_){
		m_preco = preco_;
	}

/** @brief Getters */
	double Produto::getM_codigo(){
		return m_codigo_de_barras;
	}
	string Produto::getM_descricao(){
		return m_descricao;
	}
	double Produto::getM_preco(){
		return m_preco;
	}
	