#include<iostream>
#include "aluno.h"

using namespace std;

int main(){
	alunos aluno;
	aluno.setNome("Andrezinho_6969");
	aluno.setMatricula(20176666);
	aluno.setTurno("Diurno do caralho");

	cout << "Nome:" << aluno.getNome() << endl;

	cout << "Matricula:" << aluno.getMatricula() << endl;

	cout << "Turno:" << aluno.getTurno() << endl;

	return 0;
}