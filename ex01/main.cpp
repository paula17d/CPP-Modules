/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:24:44 by pdrettas          #+#    #+#             */
/*   Updated: 2025/10/29 20:50:17 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	Zombie *horde;
	int N;
	
	N = 3;
	horde = zombieHorde(N, "Joe");
	
	for (int i = 0; i < N; i++)
		horde[i].announce();
	
	delete[] horde;
	return 0;
}
