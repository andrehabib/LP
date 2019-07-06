/**
* @file date.cpp
* @brief Métodos da Classe Date
*/

/** @brief Inclui a biblioteca date.h */
#include "../include/date.h"


/**
* @brief Método construtor padrão.
* @return Não possui retorno
*/

Date::Date(void){}

/**
* @brief Método construtor padronizado.
* @param  dia_, mes_, ano_.
* @return Não possui retorno.
*/
Date::Date(const int& dia_, const int& mes_, const int& ano_){
	if(dia_>31 || dia_< 1){
		validardia(dia_);
	}
	else{
		dia = dia_;
	}

	if(mes_>12 || mes_ < 1){
		validarmes(mes_);
	}
	else{
		mes = mes_;
	}
	if(ano_< 2018){
		validarano(ano);
	}
	else{
		ano = ano_;
	}

}

/**
* @brief Método que verifica se o dia é válido.
* @param  Rcebe um valor inteiro chamado "d" que armazena o dia.
* @return Não possui retorno.
*/
void Date::validardia(int d){
	cout << " -Digite o dia correto, é necessario ser menor ou igual a 31 e não pode ser menor que 1 !" << endl;
	cin >> d;
	if(d <= 31 && d >= 1){
		dia = d;
	}
	else{
		validardia(d);
	}

}

/**
* @brief Método que verifica se o mês é válido.
* @param  Recebe um valor inteiro chamado "m" que armazena o mês.
* @return Não possui retorno.
*/
void Date::validarmes(int m){
	cout << " -Digite o mês correto, é necessario ser menor ou igual a 12 e não pode ser menor que 1 !" << endl;
	cin >> m;
	if(m <= 12 && m >=1){
		mes = m;
	}
	else{
		validarmes(m);
	}
}

/**
* @brief Método que verifica se o ano é válido.
* @param  Recebe um valor inteiro chamado "a" que armazena o ano.
* @return Não possui retorno.
*/
void Date::validarano(int a){
	cout << " -Digite o ano correto, é necessario ter 4 digitos e ser no minimo 2018!" << endl;
	cin >> a;
	if(a >= 2018){
		ano = a;
	}
	else{
		validarano(a);
	}
}

/**
* @brief Método destrutor.
* @return Não possui retorno
*/
Date::~Date(){}