#include <iostream>
#include <string>

using std::string;

class Pessoa{

private:
	int id;
	string nome;
	int idade;
	float altura;
	string numero;

public:

	Pessoa(int id_,string _nome, int _idade, float _altura, string numero_)
	: id(id_), nome(_nome), idade(_idade),  altura(_altura), numero(numero_) {}

	string getNome();
	void setNome(string nome);
	int getIdade();
	void setIdade(int idade);
	float getAltura();
	void setAltura(float altura);
	friend std::ostream& operator<<(std::ostream& saida,const Pessoa& p)
	{
		saida << "Nome: " << p.nome << " Idade: " << p.idade << " Altura: " << p.altura << " Numero: " << p.numero;
		return saida;
	}
	friend std::istream& operator>>(const Pessoa& p2)
	{
		entrada >> p2.nome >> p2.idade  >> p2.altura >> p2.numero;
		return entrada;
	}

};



