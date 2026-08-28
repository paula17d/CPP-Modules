/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:02:34 by pauladretta       #+#    #+#             */
/*   Updated: 2025/11/06 16:40:41 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default constructor
Zombie::Zombie()
{
    this->name = "default zombie";
}

// Personalized constructor
Zombie::Zombie(std::string newName) : 
    name(newName)
{}

// Zombies announce themselves as follows:
void Zombie::announce(void)
{
    std::cout << MAGENTA << this->name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

/*
Deconstructor: Zombies must be destroyed when you no longer need them. 
The destructor must print a message with the name of the zombie for debugging purposes.
*/
Zombie::~Zombie()
{
    std::cout << RED << this->name << ": Zombie destroyed." << RESET << std::endl;
}