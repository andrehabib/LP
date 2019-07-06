/**
* @file bebida.h
* @brief Classe Filha Bebida
* @brief Definindo biblioteca bebida
*/
#ifndef Bebida_H
#define Bebida_H

/** @brief Inclui a biblioteca produto.h */
#include "produto.h"

using std::string;
using std::cout;
using std::endl;

using std::string;

/** @brief Definindo a classe Bebida que herda da classe Produto */
class Bebida : public Produto{
protected:

	/** @brief Define a variável chamada m_teor_alcoolico do tipo double */
	double (m_teor_alcoolico);



	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_codigo_de_barras << ";" << m_descricao << ";" << m_preco << ";" << m_tipo << ";" << m_teor_alcoolico << ";" << endl;
	}

		
public:
	/** @brief Definindo construtor padrão da classe Bebida para void, pois não utilizaremos */ 
	Bebida(void);

	/** @brief Definindo construtor padronizado da classe Bebida */ 
	Bebida(double, string, double, int, double);

	/** @brief Definindo destrutor da classe Bebida */ 
	~Bebida();

	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();
	
	/** @brief Setters */
	void setM_codigo(double codigo);
	void setM_descricao(string descricao_);
	void setM_preco(double preco_);
	void setM_teor(double teor);
	

	/** @brief Getters */
	double getM_codigo();
	string getM_descricao();
	double getM_preco();
	double getM_teor();
	
};

#endif