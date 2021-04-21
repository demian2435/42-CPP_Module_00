#include <iostream>
#include "Rubrica.hpp"

int	main(void)
{
	std::string			cmd;
	Rubrica			rubrica;

	std::cout << "** BENVENUTO NELLA RUBRICA BRUTTA **" << std::endl;
	while (1)
	{
		std::cout << "Inserisci comando: ";
		std::cin.clear();
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			rubrica.add();
		else if (cmd.compare("SEARCH") == 0)
			rubrica.search();
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Comando non valido (ADD / SEARCH / EXIT)" << std::endl;
	}
	std::cout << "** CIAO CIAO DALLA RUBRICA BRUTTA **" << std::endl;	
	return (0);
}
