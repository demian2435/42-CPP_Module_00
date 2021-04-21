#include "Contatto.hpp"

Contatto::Contatto(void)
{
	first_name      = "";
	last_name       = "";
	nickname        = "";
	login           = "";
	postal_address  = "";
	email_address   = "";
	phone_number    = "";
	birthday_date   = "";
	favorite_meal   = "";
	underwear_color = "";
	darkest_secret  = "";
	empty           = true;
}

void		Contatto::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

void		Contatto::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

void		Contatto::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void		Contatto::setLogin(std::string login)
{
	this->login = login;
}

void		Contatto::setPostalAddress(std::string postal_address)
{
	this->postal_address = postal_address;
}

void		Contatto::setEmailAddress(std::string email_address)
{
	this->email_address = email_address;
}

void		Contatto::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void		Contatto::setBirthdayDate(std::string birthday_date)
{
	this->birthday_date = birthday_date;
}

void		Contatto::setFavoriteMeal(std::string favorite_meal)
{
	this->favorite_meal = favorite_meal;
}

void		Contatto::setUnderwearColor(std::string underwear_color)
{
	this->underwear_color = underwear_color;
}

void		Contatto::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

void        Contatto::setEmpty(bool empty)
{
	this->empty = empty;
}

std::string	Contatto::getFirstName(void)
{
	return this->first_name;
}

std::string	Contatto::getLastName(void)
{
	return this->last_name;
}

std::string	Contatto::getNickname(void)
{
	return this->nickname;
}

std::string	Contatto::getLogin(void)
{
	return this->login;
}

std::string	Contatto::getPostalAddress(void)
{
	return this->postal_address;
}

std::string	Contatto::getEmailAddress(void)
{
	return this->email_address;
}

std::string	Contatto::getPhoneNumber(void)
{
	return this->phone_number;
}

std::string	Contatto::getBirthdayDate(void)
{
	return this->birthday_date;
}

std::string	Contatto::getFavoriteMeal(void)
{
	return this->favorite_meal;
}

std::string	Contatto::getUnderwearColor(void)
{
	return this->underwear_color;
}

std::string	Contatto::getDarkestSecret(void)
{
	return this->darkest_secret;
}

bool        Contatto::isEmpty(void)
{
	return this->empty;
}
