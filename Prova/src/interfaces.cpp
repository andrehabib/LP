/**
* @file interfaces.h
* @brief Métodos da Classe Interfaces
*/

#include "../include/interfaces.h"

Interfaces::Interfaces(void){}

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

	switch(op){
	case 1: 

		cadastro();

		break;

	case 2:

			//remover();

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
			menu();
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
				std::cout << " VOLTANDO PARA O MENU ...!!" << std::endl;
				std::cout << " VOLTANDO PARA O MENU ...!!" << std::endl;

				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
				menu();
				break;

			default:
				std::cout << " Opção inválida!!" << std::endl;

				std::cout << " " << std::endl;
				std::cout << " " << std::endl;

				cadastro();
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

		if(it != loja.end()){
			std::cout << " Já existe um produto com esse codigo de barras!! " << std::endl;
			cadastrarRoupa();
		}
		else{
		/** @brief Instancia um objeto bebida */
		Bebida ProdutoBebida(codigo_de_barras, descricao, preco, porcento);
		
		loja.insert(pair<double,Produto*>(codigo_de_barras, new Bebida(codigo_de_barras, descricao, preco, porcento)));

		/** @brief Criação da variável ofstream para escrever a bebida no arquivo lojas.txt*/
		
		arquivoS.open("loja.txt",ios::app);
		if(arquivoS.is_open()){
		std::cout << "Bebida Cadastrada!!" << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		std::cout << " VOLTANDO PARA O MENU DE CADASTRO ...!!" << std::endl;
		std::cout << " VOLTANDO PARA O MENU DE CADASTRO ...!!" << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		arquivoS << ProdutoBebida;
		arquivoS<< "\n";



		}else{
		std::cout << " Não foi possivel cadastrar a bebida! " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		cadastro();

		}

		/** @brief Fechando o arquivo através do método fecharArquivo */
		fecharArquivo();

		/** @brief Liberando a memória */
		
		arquivoS.open("loja.txt", ios::app);

		cadastro();
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

		it = loja.find(codigo_de_barras);

		if(it != loja.end()){
			std::cout << " Já existe um produto com esse codigo de barras!! " << std::endl;
			cadastrarRoupa();
		}
		else{
		/** @brief Instancia um objeto roupa */
		Roupa ProdutoRoupa(codigo_de_barras, descricao, preco, marca, sexo, tamanho);

		loja.insert(pair<double,Produto*>(codigo_de_barras, new Roupa(codigo_de_barras, descricao, preco, marca, sexo, tamanho)));

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
		arquivoS<< "\n";



		}else{
		std::cout << " Não foi possivel cadastrar a roupa! " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		cadastro();

		}

		/** @brief Fechando o arquivo através do método fecharArquivo */
		fecharArquivo();

		/** @brief Liberando a memória */
		
		arquivoS.open("loja.txt", ios::app);

		cadastro();
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

		it = loja.find(codigo_de_barras);

		if(it != loja.end()){
			std::cout << " Já existe um produto com esse codigo de barras!! " << std::endl;
			cadastrarFruta();
		}
		else{
		/** @brief Instancia um objeto fruta */
		Fruta ProdutoFruta(codigo_de_barras, descricao, preco, data, validade);

		loja.insert (pair<double,Produto*>(codigo_de_barras, new Fruta(codigo_de_barras, descricao, preco, data, validade)));


	
		/** @brief Criação da variável ofstream para escrever a bebida no arquivo lojas.txt*/
		
		arquivoS.open("loja.txt",ios::app);
		if(arquivoS.is_open()){
		std::cout << "Fruta Cadastrada!!" << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		std::cout << " VOLTANDO PARA O MENU DE CADASTRO ...!!" << std::endl;
		std::cout << " VOLTANDO PARA O MENU DE CADASTRO ...!!" << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		arquivoS << ProdutoFruta;
		arquivoS<< "\n";



		}else{
		std::cout << " Não foi possivel cadastrar a fruta! " << std::endl;

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		cadastro();

		}

		/** @brief Fechando o arquivo através do método fecharArquivo */
		fecharArquivo();

		/** @brief Liberando a memória */
		
		arquivoS.open("loja.txt", ios::app);

		cadastro();
		}

		
}


void Interfaces::fecharArquivo(){
	arquivoE.close();
	arquivoS.close();
}

void Interfaces::remover(){
	int op = 0;

	std::cout << " " << std::endl;
	std::cout << " " << std::endl;

	std::cout << "Escolha uma das opções abaixo: " << std::endl;
	std::cout << "1. Remover produto:" << std::endl;
	std::cout << "2. Retornar para menu:" << std::endl;
	cin >> op;

	std::cout << " " << std::endl;
	std::cout << " " << std::endl;


	switch(op){
		case 1:
			std::cout << "Digite o codigo de barras do produto que deseja remover " << std::endl;
			cin >> codigo_de_barras;

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;


			loja.erase(codigo_de_barras);

			it = loja.find(codigo_de_barras);

			if(it == prod.end()){
				std::cout << "Digite o codigo de barras do produto que deseja remover " << std::endl;
				std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			}

			break;

		case 2:

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			std::cout << " VOLTANDO PARA O MENU...!!" << std::endl;
			std::cout << " VOLTANDO PARA O MENU...!!" << std::endl;

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			menu();
			break;

		default:

			std::cout << " Opção inválida!!" << std::endl;

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			remover();

	}

}

void Interfaces::listar(){
		arquivoE.open("loja.txt");

		
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

		if(arquivoE.is_open()){
			while(getline(arquivoE, linha)){
				std::cout << linha << std::endl;
			}
			fecharArquivo();
		}
		else{
			std::cout << "Não foi possível abrir o arquivo" << std::endl;

			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			std::cout << " VOLTANDO PARA O MENU ...!!" << std::endl;
			std::cout << " VOLTANDO PARA O MENU ...!!" << std::endl;


			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			menu();
		}


}