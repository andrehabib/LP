#ifndef HABIB_
#define HABIB_

using namespace std;

class alunos{
private:
	long int matricula;
	string nome;
	string turno;

public:
	string getNome();
	void setNome(string nome_);
	long int getMatricula();
	void setMatricula(long int matricula_);
	string getTurno();
	void setTurno(string turno_);

};

#endif