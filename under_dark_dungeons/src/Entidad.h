#ifndef ENTIDAD_H
#define ENTIDAD_H

#include <string>
#include <vector>

class Entidad {

	private:
		
		std::string name;
		int hp;
		int atk;
		int def;
		
	public:

		Entidad(std::string name, int hp, int atk, int def);
		
		void hpSetter(int hp);
		int hpGetter();

};

#endif
