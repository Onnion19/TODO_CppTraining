#include "Timer.h"
#include "Header/Exercice1/Player.h"
#include <iostream>


/**
 * En este ejercicio eres un desarrollador que quiere que su jugador pueda llevar armas de distintos tipos: pistola , espada, arco. 
 * Tu objetivo es hacer una implementacion en la que el jugador se pueda equipar distintas armas,
 * y cuando decida atacar se ejecute una cosa u otra en funcion de la arma que lleve el jugador. 
 * 
 * Para simplificar el proceso, se debera llamar una funcion 'Atacar()' (o cualquiera que tu quieras) y debera imprimir por pantalla 
 * que tipo de arma esta usando el jugador. 
 * 
 * Restricciones: 
 * - Dificultad Baja: Ninguna.
 * - Dificultad Media: Debes usar COMO MINIMO la classe Player que encontraras dentro de Header/Exercice1/Player.h y Source/Exercice1/Player.cpp
 * - Dificultad Alta: Debes usar las clases que quieras, pero no puedes usar virtual.
 * - Dificultad Nightmare: Debes usar templates
 */

int Ejemplo(); //Se puede eliminar

int main()
{

	Utils::Timer chrono("Application"); //No eliminar o alterar esta linea

	/*Codigo de ejemplo, porfavor eliminar*/
		Ejemplo();
	/*************************************/

	//Tu codigo va aqui
	
	//

	return 0;
}

//Ejemplo de una implementacion muy basica (super basica)
//Todo el codigo de ejemplo se puede eliminar

void Atacar(int i)
{
	if (i == 0)
		std::cout << "usando Espada" << std::endl;
	else if (i == 1)
		std::cout << "usando arco"<< std::endl;
	else if (i == 2)
		std::cout << "usando pistola"<< std::endl;
}

int Ejemplo ()
{
	//Indice al tipo de arma 
	int i = 0; 
	//Por cada tipo de arma
	while (i < 3) 
	{	
		//Atacar con el arma en concreto
		Atacar(i);
		//cambiar a la siguiente arma
		i++;
	}

	return 0;
		
}
