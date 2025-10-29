/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:54:59 by pdrettas          #+#    #+#             */
/*   Updated: 2025/10/29 20:50:53 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

/*
It must allocate N Zombie objects in a single allocation. 
Then, it must initialize the zombies, giving each of them the name passed as a parameter.
The function returns a pointer to the first zombie.
*/
Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		zombies[i].setName(name);

	return zombies;
}