#include<iostream>
#include<random>
#include"bibli.h"
#include <thread>         // std::this_thread::sleep_for
#include <chrono> 

int main(int argc,char *argv[]){
	double dado[6];
	dado[0]=1;
	dado[1]=2;
	dado[2]=3;
	dado[3]=4;
	dado[4]=5;
	dado[5]=6;



	double checar[6];
	checar[0]=0;
	checar[1]=0;
	checar[2]=0;
	checar[3]=0;
	checar[4]=0;
	checar[5]=0;

	int result = 0;

	Dado dados;

	std::cout<< "Espaço amostral: 10" << std::endl;
	std::cout<< "|" << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(1));

	for (int i = 0; i < 10; ++i)
	{

		result = dados.aleatorio();

		std::cout << "Valor " << result << std::endl;

		for (int i = 0; i < 6; ++i)
		{
			if (dado[i] == result )
			{
				checar[i] += 1;
				break;
			}
		}

	}

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(2));



	std::cout << "Valor " << dado[0] << " apareceu com a probabilidade de " << checar[0]/10 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[1] << " apareceu com a probabilidade de " << checar[1]/10 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[2] << " apareceu com a probabilidade de " << checar[2]/10 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[3] << " apareceu com a probabilidade de " << checar[3]/10 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[4] << " apareceu com a probabilidade de " << checar[4]/10 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[5] << " apareceu com a probabilidade de " << checar[5]/10 << std::endl;

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;

	checar[0]=0;
	checar[1]=0;
	checar[2]=0;
	checar[3]=0;
	checar[4]=0;
	checar[5]=0;

	std::cout<< "Espaço amostral: 100" << std::endl;
	std::cout<< "|" << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(1));

	for (int i = 0; i < 100; ++i)
	{

		result = dados.aleatorio();

		if(i<50){
			std::cout << "Valor " << result << std::endl;
		}
		

		for (int i = 0; i < 6; ++i)
		{
			if (dado[i] == result )
			{
				checar[i] += 1;
				break;
			}
		}

	}

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(2));

	std::cout << "Valor " << dado[0] << " apareceu com a probabilidade de " << checar[0]/100<< std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[1] << " apareceu com a probabilidade de " << checar[1]/100 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[2] << " apareceu com a probabilidade de " << checar[2]/100 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[3] << " apareceu com a probabilidade de " << checar[3]/100 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[4] << " apareceu com a probabilidade de " << checar[4]/100 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[5] << " apareceu com a probabilidade de " << checar[5]/100 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;

	checar[0]=0;
	checar[1]=0;
	checar[2]=0;
	checar[3]=0;
	checar[4]=0;
	checar[5]=0;

	std::cout<< "Espaço amostral: 1000" << std::endl;
	std::cout<< "|" << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(1));

	for (int i = 0; i < 1000; ++i)
	{

		result = dados.aleatorio();

		if(i<50){
			std::cout << "Valor " << result << std::endl;
		}
		

		for (int i = 0; i < 6; ++i)
		{
			if (dado[i] == result )
			{
				checar[i] += 1;
				break;
			}
		}

	}

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;


	std::this_thread::sleep_for (std::chrono::seconds(2));

	std::cout << "Valor " << dado[0] << " apareceu com a probabilidade de " << checar[0]/1000<< std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[1] << " apareceu com a probabilidade de " << checar[1]/1000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[2] << " apareceu com a probabilidade de " << checar[2]/1000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[3] << " apareceu com a probabilidade de " << checar[3]/1000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[4] << " apareceu com a probabilidade de " << checar[4]/1000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[5] << " apareceu com a probabilidade de " << checar[5]/1000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;


	std::cout<< "Espaço amostral: 10000" << std::endl;
	std::cout<< "|" << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(1));

	checar[0]=0;
	checar[1]=0;
	checar[2]=0;
	checar[3]=0;
	checar[4]=0;
	checar[5]=0;

	for (int i = 0; i < 10000; ++i)
	{

		result = dados.aleatorio();

		if(i<50){
			std::cout << "Valor " << result << std::endl;
		}
		

		for (int i = 0; i < 6; ++i)
		{
			if (dado[i] == result )
			{
				checar[i] += 1;
				break;
			}
		}

	}

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;


	std::this_thread::sleep_for (std::chrono::seconds(2));

	std::cout << "Valor " << dado[0] << " apareceu com a probabilidade de " << checar[0]/10000<< std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[1] << " apareceu com a probabilidade de " << checar[1]/10000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[2] << " apareceu com a probabilidade de " << checar[2]/10000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[3] << " apareceu com a probabilidade de " << checar[3]/10000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[4] << " apareceu com a probabilidade de " << checar[4]/10000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[5] << " apareceu com a probabilidade de " << checar[5]/10000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;

	std::cout<< "Espaço amostral: 100000" << std::endl;
	std::cout<< "|" << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(1));

	checar[0]=0;
	checar[1]=0;
	checar[2]=0;
	checar[3]=0;
	checar[4]=0;
	checar[5]=0;

	for (int i = 0; i < 100000; ++i)
	{

		result = dados.aleatorio();

		if(i<50){
			std::cout << "Valor " << result << std::endl;
		}
		

		for (int i = 0; i < 6; ++i)
		{
			if (dado[i] == result )
			{
				checar[i] += 1;
				break;
			}
		}

	}

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;


	std::this_thread::sleep_for (std::chrono::seconds(2));

	std::cout << "Valor " << dado[0] << " apareceu com a probabilidade de " << checar[0]/100000<< std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[1] << " apareceu com a probabilidade de " << checar[1]/100000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[2] << " apareceu com a probabilidade de " << checar[2]/100000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[3] << " apareceu com a probabilidade de " << checar[3]/100000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[4] << " apareceu com a probabilidade de " << checar[4]/100000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	std::cout << "Valor " << dado[5] << " apareceu com a probabilidade de " << checar[5]/100000 << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));

	std::cout<< "---------------------------------------------------------------------------------" << std::endl;


	return 0;


}