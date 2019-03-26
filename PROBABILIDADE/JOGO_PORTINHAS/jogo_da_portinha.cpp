#include <iostream>
#include "dado2.h"
#include <thread>         // std::this_thread::sleep_for
#include <chrono> 
int main()
{

//////////////////////// Experimento 1 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// 	Sem a mudança de portas ///////////////////////////////////////////////////////////////////////////////////////
	std::cout<<"Joguinho das portas"<<std::endl;
	int vitoriasExperimeto1 = 0;
	for (int i = 0; i < 50000; ++i)
	{
		
	
	// numero aleatorio de 1 a 2
	Dado randor(0,2);

    // porta vencedora 

    int portaGanhadora = randor.aleatorio();

    // selecionando uma porta para o participante

    int participante = randor.aleatorio();

    std::cout<<"Porta selecionada: " << participante <<std::endl;
    
    // pegando umas das duas outras portas pra eliminar

 	int eliminada = randor.aleatorioComExcecao(portaGanhadora,participante);

 	std::cout<<"Porta eliminada: " << eliminada <<std::endl;
 	
 	if(participante == portaGanhadora){
 		std::cout<<"O participante permanece com a porta escolhida !" <<std::endl;
 		std::cout<<"Ganhou o jogo!" <<std::endl;
 		std::cout<<"Porta ganhadora: " << portaGanhadora <<std::endl;
 		vitoriasExperimeto1 ++;
 	}
 	else{
 		std::cout<<"Perdeu o jogo!" <<std::endl;
 		std::cout<<"Porta ganhadora: " << portaGanhadora <<std::endl;
 	}

 	}


 	std::cout<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////// " <<std::endl;

 	std::this_thread::sleep_for (std::chrono::seconds(2));

 	std::cout<<"Quantidade de vitórias com a porta fixa: " << vitoriasExperimeto1 <<std::endl;

 	std::this_thread::sleep_for (std::chrono::seconds(2));
 	///////////////////////////////// EXPERIMENTO 2 ////////////////////////////////////////////////////////////////////////////////////////////////////


 	std::cout<<"Joguinho das portas 2"<<std::endl;

 	std::this_thread::sleep_for (std::chrono::seconds(2));
	int vitoriasExperimeto2 = 0;
	for (int i = 0; i < 50000; ++i)
	{
		
	
	// numero aleatorio de 1 a 2
	Dado randor2(0,2);

    // porta vencedora 

    int portaGanhadora2 = randor2.aleatorio();

    // selecionando uma porta para o participante

    int participante2 = randor2.aleatorio();

    std::cout<<"Porta selecionada: " << participante2 <<std::endl;
    
    // pegando umas das duas outras portas pra eliminar

 	int eliminada2 = randor2.aleatorioComExcecao(portaGanhadora2,participante2);

 	std::cout<<"Porta eliminada: " << eliminada2 <<std::endl;

 	participante2 = randor2.aleatorioComExcecao(participante2,eliminada2);
 	
 	if(participante2 == portaGanhadora2){
 		std::cout<<"O participante troca a porta escolhida pela oputra que está sobrando !" <<std::endl;
 		std::cout<<"Ganhou o jogo!" <<std::endl;
 		std::cout<<"Porta ganhadora: " << portaGanhadora2 <<std::endl;
 		vitoriasExperimeto2 ++;
 	}
 	else{
 		std::cout<<"Perdeu o jogo!" <<std::endl;
 		std::cout<<"Porta ganhadora: " << portaGanhadora2 <<std::endl;
 	}

 	}


 	std::cout<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////// " <<std::endl;

 	std::this_thread::sleep_for (std::chrono::seconds(2));

 	std::cout<<"Quantidade de vitórias com a porta trocada: " << vitoriasExperimeto2 <<std::endl;

   	

	return 0;
}