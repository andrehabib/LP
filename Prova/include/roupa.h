/**
* @file roupa.h
* @brief Classe Filha Roupa
* @brief Definindo biblioteca Roupa
*/
#ifndef Roupa_H
#define Roupa_H

/** @brief Inclui a biblioteca produto.h */
#include "produto.h"

using std::string;
using std::cout;
using std::endl;

using std::string;

/** @brief Definindo a classe Roupa que herda da classe Produto */
class Roupa : public Produto{
protected:

	/** @brief Define a variável chamada m_marca do tipo string*/
	std::string m_marca;

	/** @brief Define a variável chamada m_sexo tipo char */
	char m_sexo;

	/** @brief Define a variável chamada m_tamanho tipo double */
	std::string m_tamanho;



	/** @brief Implementação do método virtual sobrecarga de impressão */ 
	std::ostream& print(std::ostream& os) const {
		return os << m_codigo_de_barras << ";" << m_descricao << ";" << m_preco << ";" << m_marca << ";" << m_sexo 
		<< ";" << m_tamanho << "]" << endl;
	}

		
public:
	/** @brief Definindo construtor padrão da classe Roupa para void, pois não utilizaremos */ 
	Roupa(void);

	/** @brief Definindo construtor padronizado da classe Roupa */ 
	Roupa(double, string, double, string, char, string);

	/** @brief Definindo destrutor da classe Roupa */ 
	~Roupa();

	/** @brief Definindo método de impressão sem retorno */ 
	void imprime();


	/** @brief Setters */
	void setM_codigo(double codigo);
	void setM_descricao(string descricao_);
	void setM_preco(double preco_);
	void setM_marca(string marca_);
	void setM_sexo(char sexo_);
	void setM_tamanho(string tamanho_);
	
	/** @brief Getters */
	double getM_codigo();
	string getM_descricao();
	double getM_preco();
	string getM_marca();
	char getM_sexo();
	string getM_tamanho();

};

#endif