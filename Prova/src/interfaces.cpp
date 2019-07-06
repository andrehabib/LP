/**
* @file interfaces.h
* @brief Métodos da Classe Interfaces
*/

#include "../include/interfaces.h"


#include <string>

#include <sstream>

#include <cstdio>

Interfaces::Interfaces(void){}

/** @brief Definindo menu de interação com o usuário */
void Interfaces::menu(){

	int op=0;

	

	while(op!= 4){
		std::cout << "Escolha uma opção abaixo" << std::endl;
		std::cout << "1. Cadastrar Produto:" << std::endl;
		std::cout << "2. Remover produto: " << std::endl;
		std::cout << "3. Listar produtos: " << std::endl;
		std::cout << "4. Reajuste de preço: " << std::endl;
		std::cout << "5. Sair do programa: " << std::endl;
		cin >> op;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

	/** @brief Controla os serviços do sistema */
	switch(op){
	case 1: 

		cadastro();

		break;

	case 2:

		remover();

		break;

	case 3: 
			listar();
		break;

	case 4:
			
		break;

	case 5:

		std::cout << " Saindo do sistema ... " << std::endl;
		loja.clear();
		return;
	default:
			std::cout << "Opção invalida" << std::endl;
			std::cout << " Saindo do sistema ... " << std::endl;
			return;
			break;
			
	}
}
}

void Interfaces::cadastro(){
		int op = 0;

		std::cout << "Escolha um dos produtos abaixo ou retornar menu:" << std::endl;
		std::cout << "1. Bebida: " << std::endl;
		std::cout << "2. Roupa: " << std::endl;
		std::cout << "3. Fruta: " << std::endl;
		std::cout << "4. Retornar menu: " << std::endl;
		cin >> op;
		
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		switch(op){
			case 1:
				cadastrarBebida();
				break;

			case 2:
				cadastrarRoupa();
				break;

			case 3:
				cadastrarFruta();
				break;

			case 4:

				std::cout << " Saindo do sistema ... " << std::endl;

				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
				return;


				break;

			default:
				std::cout << " Opção inválida!!" << std::endl;

				std::cout << " " << std::endl;
				std::cout << " " << std::endl;

				std::cout << " Saindo do sistema ... " << std::endl;

				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
				return;


		}
	
	
			
	
}

void Interfaces::cadastrarBebida(){

		std::cout << " Digite o codigo: " << std::endl;
		cin >> codigo_de_barras;
		std::cout << " Digite a descrição: " << std::endl;
		cin >> descricao;
		std::cout << " Digite o preço: " << std::endl;
		cin >> preco;
		std::cout << " Digite o teor de alcoolico: " << std::endl;
		cin >> teor_alcoolico;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		double porcento = 0;
		porcento = preco/100;

		tipo = 1;

		it = loja.find(codigo_de_barras);

		if(it != loja.end()){
			std::cout << " Já existe um produto com esse codigo de barras!! " << std::endl;
			cadastrarBebida();
		}
		else{
		/** @brief Instancia um objeto bebida */
		Bebida ProdutoBebida(codigo_de_barras, descricao, preco, tipo, porcento);
		
		loja.insert(pair<double,Produto*>(codigo_de_barras, new Bebida(codigo_de_barras, descricao, preco, tipo, porcento)));

		/** @brief Criação da variável ofstream para escrever a bebida no arquivo lojas.txt*/
		
		arquivoS.open("loja.txt",ios::app);
		if(arquivoS.is_open()){
		std::cout << "Bebida Cadastrada!!" << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		arquivoS << ProdutoBebida;

		fecharArquivo();

		std::cout << " Saindo do sistema ... " << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		return;



		}else{
		std::cout << " Não foi possivel cadastrar a bebida! " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		/** @brief Fechando o arquivo através do método fecharArquivo */
		fecharArquivo();

		std::cout << " Saindo do sistema ... " << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		return;


		}

	}
}

void Interfaces::cadastrarRoupa(){

		std::cout << " Digite o codigo: " << std::endl;
		cin >> codigo_de_barras;
		std::cout << " Digite a descrição: " << std::endl;
		cin >> descricao;
		std::cout << " Digite o preço: " << std::endl;
		cin >> preco;
		std::cout << " Digite a marca: " << std::endl;
		cin >> marca;
		std::cout << " Digite o sexo: " << std::endl;
		cin >> sexo;
		std::cout << " Digite o tamanho: " << std::endl;
		cin >> tamanho;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		tipo = 2;
		it = loja.find(codigo_de_barras);

		if(it != loja.end()){
			std::cout << " Já existe um produto com esse codigo de barras!! " << std::endl;
			cadastrarRoupa();
		}
		else{
		/** @brief Instancia um objeto roupa */
		Roupa ProdutoRoupa(codigo_de_barras, descricao, preco, tipo, marca, sexo, tamanho);

		loja.insert(pair<double,Produto*>(codigo_de_barras, new Roupa(codigo_de_barras, descricao, tipo, preco, marca, sexo, tamanho)));

		/** @brief Criação da variável ofstream para escrever a bebida no arquivo lojas.txt*/
	
		/** @brief Criação da variável ofstream para escrever a bebida no arquivo lojas.txt*/
		
		arquivoS.open("loja.txt",ios::app);
		if(arquivoS.is_open()){
		std::cout << "Roupa Cadastrada!!" << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		std::cout << " VOLTANDO PARA O MENU DE CADASTRO ...!!" << std::endl;
		std::cout << " VOLTANDO PARA O MENU DE CADASTRO ...!!" << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		arquivoS << ProdutoRoupa;




		}else{
		std::cout << " Não foi possivel cadastrar a roupa! " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		/** @brief Fechando o arquivo através do método fecharArquivo */
		fecharArquivo();

		std::cout << " Saindo do sistema ... " << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		return;

		}

	}
}

void Interfaces::cadastrarFruta(){
		int dia,mes,ano;
		int dia_,mes_,ano_;
		std::cout << " Digite o codigo: " << std::endl;
		cin >> codigo_de_barras;
		std::cout << " Digite a descrição: " << std::endl;
		cin >> descricao;
		std::cout << " Digite o preço: " << std::endl;
		cin >> preco;
		std::cout << " Digite o dia da data do lote: " << std::endl;
		cin >> dia;
		std::cout << " Digite o mes da data do lote: " << std::endl;
		cin >> mes;
		std::cout << " Digite o ano da data do lote(obs:Precisa ser maios que 2018): " << std::endl;
		cin >> ano;
		std::cout << " Digite o dia da validade: " << std::endl;
		cin >> dia_;
		std::cout << " Digite o mes da validade: " << std::endl;
		cin >> mes_;
		std::cout << " Digite o ano da validade(obs:Precisa ser maios que 2018): " << std::endl;
		cin >> ano_;
	
		Date data(dia,mes,ano);
		Date validade(dia_,mes_,ano_);

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		tipo = 3;

		it = loja.find(codigo_de_barras);

		if(it != loja.end()){
			std::cout << " Já existe um produto com esse codigo de barras!! " << std::endl;
			cadastrarFruta();
		}
		else{
		/** @brief Instancia um objeto fruta */
		Fruta ProdutoFruta(codigo_de_barras, descricao, preco, tipo, data, validade);

		loja.insert (pair<double,Produto*>(codigo_de_barras, new Fruta(codigo_de_barras, descricao, preco, tipo, data, validade)));


	
		/** @brief Criação da variável ofstream para escrever a bebida no arquivo lojas.txt*/
		
		arquivoS.open("loja.txt",ios::app);
		if(arquivoS.is_open()){
		std::cout << "Fruta Cadastrada!!" << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		arquivoS << ProdutoFruta;
	

		/** @brief Fechando o arquivo através do método fecharArquivo */
		fecharArquivo();
		

		std::cout << " Saindo do sistema ... " << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		}else{
		std::cout << " Não foi possivel cadastrar a fruta! " << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		/** @brief Fechando o arquivo através do método fecharArquivo */
		fecharArquivo();
		

		std::cout << " Saindo do sistema ... " << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		return;

		}

	

	
		}

		
}


void Interfaces::fecharArquivo(){
	arquivoE.close();
	arquivoS.close();
	arquivoC.close();
}

/** @details Método responsável por receber um codigo de barras e logo em seguida apagar o determinado produto da memória
 depois excluir o antigo arquivo de estoque para criar um novo sem aquele*/
void Interfaces::remover(){

	
	int op = 0;

	std::cout << " " << std::endl;
	std::cout << " " << std::endl;

	std::cout << "Escolha uma das opções abaixo: " << std::endl;
	std::cout << "1. Remover produto:" << std::endl;
	std::cout << "2. Sair do programa:" << std::endl;
	cin >> op;

	std::cout << " " << std::endl;
	std::cout << " " << std::endl;


	if(op == 1){

		std::cout << "Digite o codigo de barras do produto que deseja remover " << std::endl;
		cin >> codigo_de_barras;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		it = loja.find(codigo_de_barras);

		loja.erase(codigo_de_barras);

		if(it == loja.end()){
			std::cout << "Foi removido com sucesso " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			remove("loja.txt");
		

		for(auto it:loja){
			arquivoS.open("loja.txt", ios::app);
			arquivoS << *it.second;
		}
			fecharArquivo();
		}

			

		

	}
	else{
		/** @brief Fechando o arquivo através do método fecharArquivo */
			fecharArquivo();
		

			std::cout << " Saindo do sistema ... " << std::endl;

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

	}
			
		
}

/** @brief Método responsável por ler o arquivo e listar as informações contidas nele*/
void Interfaces::listar(){

		
		arquivoE.open("loja.txt");

		
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		if(arquivoE.is_open()){
			while(getline(arquivoE, linha)){
				std::cout << linha << std::endl;
			}
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			fecharArquivo();
		}
		else{
			std::cout << "Não foi possível abrir o arquivo" << std::endl;

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			/** @brief Fechando o arquivo através do método fecharArquivo */
			fecharArquivo();
		

			std::cout << " Saindo do sistema ... " << std::endl;

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;


		}


}

/** @brief Método responsável por carregar os arquivos para a mémoria*/
void Interfaces::carregarMemoria(){

	arquivoS.open("loja.txt", ios::app);
	arquivoC.open("loja.txt");


	std::string campo1,campo2, campo3, campo4, campo5, campo6, campo7,campo8, campo9,campo10;
	double campoid,campopreco,campoteor;
	int dia1,mes1,ano1,dia1_,mes1_,ano1_,campotipo;

	std::string arquivo; 

	/** @brief Leitura do arquivo para pegas os atributos de cada produto especifico */
	while(getline(arquivoC, linha)){
		stringstream ss(linha);
		getline(ss, campo1,';');
		campoid = stoi(campo1);
		getline(ss, campo2,';');
		getline(ss, campo3,';');
		campopreco = stoi(campo3);
		getline(ss, campo4,';');

		/** @brief Espicifica o produto que vai ser lido apra seus determinados construtores */
		campotipo = stoi(campo4);

		if(campotipo == 1){
			getline(ss, campo5,';');
			campoteor = stoi(campo5);

			loja.insert(pair<double,Produto*>(campoid, new Bebida(campoid,campo2,campopreco,campotipo,campoteor)));
				
		}
		if(campotipo == 2){
			
			getline(ss, campo5,';');
			getline(ss, campo6,';');
			getline(ss, campo7,';');

			loja.insert(pair<double,Produto*>(campoid, new Roupa(campoid,campo2,campopreco,campotipo,campo5,campo6,campo7)));
					fecharArquivo();
		}
				
		if(campotipo == 3){
			getline(ss, campo5,'/');
			dia1 = stoi(campo5);
			getline(ss, campo6,'/');
			mes1 = stoi(campo6);
			getline(ss, campo7,';');
			ano1 = stoi(campo7);
			Date Data1(dia1,mes1,ano1);

			getline(ss, campo8,'/');
			dia1_ = stoi(campo8);
			getline(ss, campo9,'/');
			mes1_ = stoi(campo9);
			getline(ss, campo10,';');
			ano1_ = stoi(campo10);
			Date Validade1(dia1_,mes1_,ano1_);
			loja.insert(pair<double,Produto*>(campoid, new Fruta(campoid,campo2,campopreco,campotipo,Data1,Validade1)));
				
		}	
		else{
			std::cout << " Deu erro ... " << std::endl;

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
		}
	}



}