#include "Timer.h"
#include "Header/Exercice1/Player.h"
#include <iostream>
#include <variant>
#include <type_traits>

/**
 * En este ejercicio eres un desarrollador que quiere que su jugador pueda llevar armas de distintos tipos: pistola , espada, arco. 
 * Tu objetivo es hacer una implementacion en la que se ejecute una cosa u otra en funcion de la arma que lleve. 
 * 
 * Para simplificar, cuando se llame la funcion de EjecutarArma() (o cualquiera que tu quieras) debera imprimir por pantalla 
 * que tipo de arma es. 
 * 
 * Restricciones: 
 * - Dificultad Baja: Ninguna, puedes usar todo lo que quieras y como quieras. 
 * - Dificultad Media: Debes usar la classe Player que encontraras dentro de Header/Exercice1/Player.h y Source/Exercice1/Player.cpp.
 * - Dificultad Alta: Debes usar la clase que quieras, pero no puedes usar virtual y aplicar el principio SOLID.
 * 
 */


enum class Weapon {
	None,
	pistola,
	espada,
	arco
};



template<Weapon T>
class myWeapon {
public:
	void Fire() {}
};

template<>
class myWeapon<Weapon::arco> {
public:
	void Fire() { std::cout << "I'm an arc" << std::endl; }
};
template<>
class myWeapon<Weapon::espada> {
public:
	void Fire() { std::cout << "I'm an sword" << std::endl; }
};
template<>
class myWeapon<Weapon::pistola> {
public:
	void Fire() { std::cout << "I'm an pistol" << std::endl; }
};


class myPlayer {

public:
	template <Weapon w>
	constexpr void EquipWeapon()
	{
		arma = myWeapon<w>();
	}

	void Fire()
	{
		std::visit([](auto& gun) {gun.Fire(); }, arma);
	}

private:

	std::variant< myWeapon<Weapon::arco>, myWeapon<Weapon::espada>, myWeapon<Weapon::pistola>, myWeapon<Weapon::None>>  arma;
};


int main()
{

	Utils::Timer chrono("Tu Codigo"); //No eliminar o alterar esta linea

	//Tu codigo va aqui

	myPlayer player;
	player.EquipWeapon<Weapon::arco>();
	player.Fire();

	player.EquipWeapon<Weapon::espada>();
	player.Fire();

	player.EquipWeapon<Weapon::pistola>();
	player.Fire();

	//

	return 0;
}