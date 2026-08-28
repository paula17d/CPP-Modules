/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:28:43 by pdrettas          #+#    #+#             */
/*   Updated: 2025/10/25 20:25:07 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/*
This function creates a zombie, names it, and returns it so you can use it outside
of the function scope.
*/
Zombie* newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	return zombie; 
}
