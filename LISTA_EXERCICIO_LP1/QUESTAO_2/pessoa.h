#include <iostream>
#include <string>

using std::string;

class Pessoa{

private:
	string nome;
	int idade;
	float altura;

public:

	Pessoa(string _nome="Andre", int _idade = 20, float _altura=1.65)
	: nome(_nome), idade(_idade),  altura(_altura) {}

	string getNome();
	void setNome(string nome);
	int getIdade();
	void setIdade(int idade);
	float getAltura();
	void setAltura(float altura);
	friend std::ostream& operator<<(std::ostream& saida,const Pessoa& p)
	{
		saida << "Nome: " << p.nome << "Idade: " << p.idade << "Altura: " << p.altura;
		return saida;
	}

};

