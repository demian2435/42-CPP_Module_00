/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rubrica.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:15:07 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 11:15:08 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rubrica.hpp"

Rubrica::Rubrica()
{
	id = 0;
}

void		Rubrica::add(void)
{
	if (id >= MAX_CONTATTI)
	{
		std::cout << "Limite massimo di " << MAX_CONTATTI << " contatti raggiunto" << std::endl;
		return ;
	}
	std::cout << "*********************************************" << std::endl;
	std::cout << "|            INSERISCI CONTATTO             |" << std::endl;
	std::cout << "*********************************************" << std::endl;
	inserimento(id);
	std::cout << "*********************************************" << std::endl;
	contatti[id].setEmpty(false);
	id++;
}

void	Rubrica::inserimento(int id)
{
	std::string input;

	std::cout << "first name: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setFirstName(input);
	std::cout << "last name: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setLastName(input);
	std::cout << "nickname: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setNickname(input);
	std::cout << "login: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setLogin(input);
	std::cout << "postal address: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setPostalAddress(input);
	std::cout << "email address: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setEmailAddress(input);
	std::cout << "phone number: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setPhoneNumber(input);
	std::cout << "birthday date: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setBirthdayDate(input);
	std::cout << "favorite meal: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setFavoriteMeal(input);
	std::cout << "underwear color: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setUnderwearColor(input);
	std::cout << "darkest secret: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contatti[id].setDarkestSecret(input);
}

void	Rubrica::search(void)
{
	std::cout << "*********************************************" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < MAX_CONTATTI && contatti[i].isEmpty() == false; i++)
	{
		std::cout << "|";
		std::cout.width(MAX_WIDTH);
		std::cout << i;
		std::cout << "|";
		troncaTesto(contatti[i].getFirstName());
		std::cout << "|";
		troncaTesto(contatti[i].getLastName());
		std::cout << "|";
		troncaTesto(contatti[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "*********************************************" << std::endl;
	cercaContatto();
}

void	Rubrica::troncaTesto(std::string str)
{
	if (str.size() > MAX_WIDTH)
			std::cout << str.substr(0, MAX_WIDTH - 1) << ".";
	else
	{
		std::cout.width(MAX_WIDTH);
		std::cout << str;
	}
}

void	Rubrica::cercaContatto(void)
{
	std::string	index;
	int			id;

	std::cout << "Inserisci index: ";
	std::cin.clear();
	std::getline(std::cin, index);
	if (index.size() < 1 || !std::isdigit(index[0]))
	{
		std::cout << "Indice non valido" << std::endl;
		return ;		
	}
	id = std::atoi(index.c_str());
	if(id >= MAX_CONTATTI || contatti[id].isEmpty())
	{
		std::cout << "Contatto non presente" << std::endl;
		return ;
	}
	stampaContatto(id);
}

void	Rubrica::stampaContatto(int id)
{
	std::cout << "*********************************************" << std::endl;
	std::cout << "first name: " << contatti[id].getFirstName() << std::endl;
	std::cout << "last name: " << contatti[id].getLastName() << std::endl;
	std::cout << "nickname: " << contatti[id].getNickname() << std::endl;
	std::cout << "login: " << contatti[id].getLogin() << std::endl;
	std::cout << "postal address: " << contatti[id].getPostalAddress() << std::endl;
	std::cout << "email address: " << contatti[id].getEmailAddress() << std::endl;
	std::cout << "phone number: " << contatti[id].getPhoneNumber() << std::endl;
	std::cout << "birthday date: " << contatti[id].getBirthdayDate() << std::endl;
	std::cout << "favorite meal: " << contatti[id].getFavoriteMeal() << std::endl;
	std::cout << "underwear color: " << contatti[id].getUnderwearColor() << std::endl;
	std::cout << "darkest secret: " << contatti[id].getDarkestSecret() << std::endl;
	std::cout << "*********************************************" << std::endl;
}
