#include "Entidad.h"

Entidad::Entidad(std::string name, int hp, int atk, int def) {
	this->name = name;
	this->hp = hp;
	this->atk = atk;
	this->def = def;
}

void Entidad::hpSetter(int hp) {
	this->hp = hp;
}

int Entidad::hpGetter() {
	return this->hp;
}
