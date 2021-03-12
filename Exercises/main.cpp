#include "Timer.h"
#include "Header/Exercice1/Player.h"


/**
 * En este ejercicio eres un desarrollador que quiere que su jugador pueda llevar armas de distintos tipos: pistola , espada, arco. 
 * Tu objetivo es hacer una implementacion en la que el jugador se pueda equipar distintas armas,
 * y cuando decida atacar se ejecute una cosa u otra en funcion de la arma que lleve el jugador. 
 * 
 * Para simplificar el proceso, se debera llamar una funcion 'Atcar()' (o cualquiera que tu quieras) y debera imprimir por pantalla 
 * que tipo de arma esta usando el jugador. 
 * 
 * Restricciones: 
 * - Dificultad Baja: Ninguna.
 * - Dificultad Media: Debes usar COMO MINIMO la classe Player que encontraras dentro de Header/Exercice1/Player.h y Source/Exercice1/Player.cpp
 * - Dificultad Alta: Debes usar las clases que quieras, pero no puedes usar virtual.
 * 
 */


int main()
{

	Utils::Timer chrono("Tu Codigo"); //No eliminar o alterar esta linea

	//Tu codigo va aqui

	//

	return 0;
}

//Ejemplo de una implementacion muy basica (super basica)

int Ejemplo {
	
	int i = 0; 
	std::cout << "entra un numero de 0 a 2 para escoger una arma, o menor que 0 para salir" << std::endl; 
	std::cin >> i; 
	while (i >= 0) 
	{
		if ( i == 0) 
			std::cout<< "usando Espada"; 
		if(i==1)
			std::cout << "usando arco"; 
		if (i==2)
			std::cout<<"usando pistola";
		
		std::cout << "entra un numero de 0 a 2, o menor que 0 para salir" << std::endl; 
		std::cin >> i; 
	}
		
}
