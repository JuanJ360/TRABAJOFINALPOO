#ifndef ARMA_H
#define ARMA_H 

#include <string>

class Arma {

	private:
		
		std::string name;
		std::string efecto;

		int atk_p;
	
	public:

		Arma(std::string name, std::string efecto, int atk);
};

#endif
