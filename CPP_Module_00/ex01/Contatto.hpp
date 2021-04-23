/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contatto.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:15:01 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 11:15:02 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>

class Contatto
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
		bool		empty;

	public:
		Contatto(void);
		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickname(std::string nickname);
		void		setLogin(std::string login);
		void		setPostalAddress(std::string postal_address);
		void		setEmailAddress(std::string email_address);
		void		setPhoneNumber(std::string phone_number);
		void		setBirthdayDate(std::string birthday_date);
		void		setFavoriteMeal(std::string favorite_meal);
		void		setUnderwearColor(std::string underwear_color);
		void		setDarkestSecret(std::string darkest_secret);
		void		setEmpty(bool var);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string getNickname(void);
		std::string getLogin(void);
		std::string getPostalAddress(void);
		std::string getEmailAddress(void);
		std::string getPhoneNumber(void);
		std::string getBirthdayDate(void);
		std::string getFavoriteMeal(void);
		std::string getUnderwearColor(void);
		std::string getDarkestSecret(void);
		bool		isEmpty(void);
};
