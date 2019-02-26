#include<iostream>
#include "aluno.h"

using namespace std;

string alunos::getNome(){
	return nome;
}

void alunos::setNome(string nome_){
	nome = nome_;
}

long int alunos::getMatricula(){
	return matricula;
}

void alunos::setMatricula(long int matricula_){
	matricula = matricula_;
}

string alunos::getTurno(){
	return turno;
}

void alunos::setTurno(string turno_){
	turno = turno_;
}