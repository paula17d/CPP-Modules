/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:02:34 by pauladretta       #+#    #+#             */
/*   Updated: 2025/10/25 19:49:38 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// default constructor
Zombie::Zombie()
{
    this->name = "default zombie";
}

// personalized constructor
Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    // <name>: BraiiiiiiinnnzzzZ...
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// deconstructor
Zombie::~Zombie()
{
    // print message with name here 
}