/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:02:34 by pauladretta       #+#    #+#             */
/*   Updated: 2025/10/25 20:40:51 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Default constructor
Zombie::Zombie()
{
    this->name = "default zombie";
}

// Personalized constructor
Zombie::Zombie(std::string name)
{
    this->name = name;
}

// Zombies announce themselves as follows:
void Zombie::announce(void)
{
    std::cout << MAGENTA << this->name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

/*
Deconstructor: Zombies must be destroyed when you no longer need them. The destructor must print
a message with the name of the zombie for debugging purposes.
*/
Zombie::~Zombie()
{
    std::cout << RED << this->name << ": Zombie destroyed." << RESET << std::endl;
}