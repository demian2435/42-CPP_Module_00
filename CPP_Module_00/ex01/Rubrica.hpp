/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rubrica.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:15:11 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 11:15:12 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
