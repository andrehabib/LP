/**
* @file produto.h
* @brief Classe base Produto
* @brief Definindo biblioteca Produto
* @details É a classe abstrata que servirá como base para os vários tipos de produtos do sistema Loja
*/
#ifndef PRODUTO_H
#define PRODUTO_H

/** @brief Inclui a biblioteca string para uso de caracteres */
#include <string>

/** @brief Inclui a biblioteca iostream */
#include <iostream>


/** @brief Define o uso de namespace no programa */
using std::string;

/** @brief Define uma classe chamada PRODUTO */
class Produto {

private:

	/** @brief Definindo um método virtual puro de sobrecarga de impressão */
	virtual std::ostream& print(std::ostream&) const = 0;
	
protected:
	/** @brief Define uma variável chamada m_codigo_de_barras do tipo inteiro para um produto */
	double m_codigo_de_barras;
	/** @brief Define uma variável chamada m_descricao do tipo string para um produto */
	std::string m_descricao;
	/** @brief Define uma variável chamdada m_preco do tipo double para armazenar o valor de um produto */
	double m_preco;

	public:

	/** @brief Define o construtor padrão de Produto com o parâmetro void, pois não utilizaremos o construtor padrão */
	Produto(void);

	/** @brief Define o construtor padronizado de Produto */
	Produto(double, string, double);

	/** @brief Definindo um método virtual */
	virtual ~Produto();

	/** @brief Definindo um método virtual puro */
	virtual void imprime()=0;

    friend std::ostream& operator << (std::ostream& os, const Produto& p) {
		return p.print(os);
	}

	/** @brief Definindo o método de sobrecarga pra soma */
	double operator+ (Produto &reajuste);

	/** @brief Definindo o método de sobrecarga pra subtração */
	double operator- (Produto &reajuste);

	/** @brief Definindo o método de sobrecarga pra subtração */
	bool operator== (Produto &iguais);

	/** @brief Setters */
	void setM_codigo(double codigo);
	void setM_descricao(string descricao_);
	void setM_preco(double preco_);

	/** @brief Getters */
	double getM_codigo();
	string getM_descricao();
	double getM_preco();


};

#endif
