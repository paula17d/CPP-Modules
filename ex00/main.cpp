/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:24:44 by pdrettas          #+#    #+#             */
/*   Updated: 2025/10/25 20:47:20 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	Zombie zombie1("Zombie 1");
	zombie1.announce();
	
	Zombie *zombie2 = newZombie("Zombie 2");
	zombie2->announce();
	
	randomChump("Zombie 3");
	
	delete zombie2;
	
	return 0;
}