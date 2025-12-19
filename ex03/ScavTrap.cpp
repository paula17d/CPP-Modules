/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:04:53 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 18:43:40 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// default constructor
ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap with Name: " << this->_name << " with default constuctor created" << std::endl;
}

// personalized constructor
// : ClapTrap(name) (if wanting to use personalized constructor)
// nothing if wanting to use default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setName(name);
    // this->setHitPoints(100);
    this->setEnergyPoints(50);
    // this->setAttackDamage(20);
    std::cout << "ScavTrap with Name: " << this->_name << " with personalized constuctor created" << std::endl;
}

// copy constructor
ScavTrap::ScavTrap(const ScavTrap &og) : ClapTrap(og)
{}

// assignment operator =
ScavTrap &ScavTrap::operator=(const ScavTrap &og)
{
    if (this != &og)
    {
        ClapTrap::operator=(og);
    }
    return *this;
}

// deconstructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap with Name: " << this->_name << " with deconstuctor destroyed" << std::endl;
}

// will display a message indicating that ScavTrap is now in Gate keeper mode.
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap with the name " << this->_name << " is now in Gate keeper mode." << std::endl;
}