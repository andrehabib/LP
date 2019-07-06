/**
* @file fruta.h
* @brief Classe Filha Fruta
* @brief Definindo biblioteca Fruta
*/
#ifndef Fruta_H
#define Fruta_H

/** @brief Inclui a biblioteca produto.h */
#include "produto.h"

/** @brief Inclui a biblioteca date.h */
#include "date.h"


using std::string;
using std::cout;
using std::endl;

using std::string;

/** @brief Definindo a classe Fruta que herda da classe Produto */
class Fruta : public Produto{
protected:

	/** @brief Define a variável chamada m_data_do_lote do tipo Date */
	Date m_data_do_lote;

	/** @brief Define a variável chamada m_validade do tipo Date */
	Date m_validade;
	

	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_codigo_de_barras << ";" << m_descricao << ";" << m_preco << ";" << m_data_do_lote << ";" << m_validade << "]" << endl;
	}

		
public:
	/** @brief Definindo construtor padrão da classe Fruta para void, pois não utilizaremos */ 
	Fruta(void);

	/** @brief Definindo construtor padronizado da classe Fruta */ 
	Fruta(double, string, double, Date, Date);

	/** @brief Definindo destrutor da classe Fruta */ 
	~Fruta();

	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();


	/** @brief Setters */
	void setM_codigo(double codigo);
	void setM_descricao(string descricao_);
	void setM_preco(double preco_);
	void setM_data(Date data_);
	void setM_validade(Date validade_);

	
	/** @brief Getters */
	double getM_codigo();
	string getM_descricao();
	double getM_preco();
	Date getM_data();
	Date getM_validade();
};

#endif