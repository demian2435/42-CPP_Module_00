#pragma once
# include "Contatto.hpp"
# include <iostream>
# include <string>
# include <cstdlib>
# define MAX_CONTATTI 8
# define MAX_WIDTH 10

class Rubrica
{
	Contatto	contatti[MAX_CONTATTI];
	int			id;

	public:
		Rubrica(void);
		void	add(void);
		void	search(void);
	private:
		void	inserimento(int id);
		void	troncaTesto(std::string str);
		void	cercaContatto(void);
		void	stampaContatto(int id);
};
