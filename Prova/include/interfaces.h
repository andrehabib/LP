/**
* @file interfaces.h
* @brief Classe Interfaces
* @brief Definindo biblioteca interfaces
*/

#ifndef Interfaces_H
#define Interfaces_H

/** @brief Inclui a biblioteca iostream */
#include <iostream>

/** @brief Inclui a biblioteca fstream para manipular arquivos */
#include <fstream>

/** @brief Inclui a biblioteca map para manipular o container map */
#include <map>

/** @brief Inclui a biblioteca produto.h */
#include "../include/produto.h"

/** @brief Inclui a biblioteca bebida.h */
#include "../include/bebida.h"

/** @brief Inclui a biblioteca roupa.h */
#include "../include/roupa.h"

/** @brief Inclui a biblioteca fruta.h */
#include "../include/fruta.h"

/** @brief Inclui a biblioteca date.h */
#include "../include/date.h"

/** @brief Definindo a classe Interfaces */
class Interfaces{
private:
	double codigo_de_barras;
	std::string descricao;
	double preco;
	double teor_alcoolico;
	std::string marca;
	std::string sexo;
	std::string tamanho;
	std::string linha;
	ofstream arquivoS;
	ifstream arquivoE;
	ifstream arquivoC;
	std::map<double,Produto*> loja;
	std::map<double,Produto*>::iterator it;
	int tipo;

public:
	/** @brief Definindo construtor padrão da classe Interfaces para void, pois não utilizaremos */ 
	Interfaces(void);

	/** @brief Definindo método de menu sem retorno */ 
	void menu();

	/** @brief Definindo método de cadastro sem retorno */ 
	void cadastro();

	/** @brief Definindo método para fehcar os arquivos sem retorno */ 
	void fecharArquivo();

	/** @brief Definindo método de remoção sem retorno */ 
	void remover();

	/** @brief Definindo método para listar sem retorno */ 
	void listar();

	void cadastrarBebida();

	void cadastrarFruta();

	void cadastrarRoupa();
	void carregarMemoria();
};

#endif