/**
* @file date.h
* @brief Classe Date
* @brief Definindo biblioteca date.h
*/
#ifndef Date_h
#define Date_h

/** @brief Inclui a biblioteca iostream  para sobrecarga de impressão */
#include <iostream>

/** @brief Inclui a biblioteca istream para sobrecarga de inserção  */
#include <istream>

/** @brief Utilizando namespace */
using namespace std;

/** @brief Definindo a classe Date */
class Date{

private:

	/** @brief Define a variável chamada dia do tipo inteiro para armazenar o dia */
	int dia;

	/** @brief Define a variável chamada mes do tipo inteiro para armazenar o mês */
	int mes;

	/** @brief Define a variável chamada ano do tipo inteiro para armazenar o ano */
	int ano;

public:
	/** @brief Definindo construtor padrão da classe Date para void, pois não utilizaremos */ 
	Date(void);

	/** @brief Definindo construtor padronizado da classe Date */ 
	Date(const int& dia_, const int& mes_, const int& ano_);


	/** @brief Definindo método para validar o dia */ 
	void validardia(int d);

	/** @brief Definindo método para validar o mês */  
	void validarmes(int m);

	/** @brief Definindo método para validar o ano */ 
	void validarano(int a);

	/** @brief Definindo destrutor da classe Date */ 
	~Date();

	/** @brief Implementação do método de sobrecarga de impressão */ 
	friend std::ostream& operator << (std::ostream& saida, const Date& p) {
		saida << p.dia << "/" << p.mes << "/" << p.ano;
		
		return saida;
	}

	/** @brief Implementação do método de sobrecarga de inserção */ 
	//friend std::ostream& operator >> (std::ostream& saida2, const Date& t) {
		//saida2 >> t.dia >> t.mes >> t.ano;

		//return saida2;
	//}

};





#endif