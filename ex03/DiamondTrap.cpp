/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:37:46 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/19 19:49:42 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// default constructor
DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap with Name: " << this->_name << " with default constructor created" << std::endl;
}

// personalized constructor
// : ClapTrap(name) (if wanting to use personalized constructor)
// nothing if wanting to use default constructor
DiamondTrap::DiamondTrap(std::string name) : _name(name), FragTrap(name), ScavTrap(name)
{
    this->ClapTrap::setName(_name + "_clap_name");
    this->setHitPoints(FragTrap::_hitPoints);
    this->setEnergyPoints(ScavTrap::_energyPoints);
    this->setAttackDamage(FragTrap::_attackDamage);
    std::cout << "DiamondTrap with Name: " << this->_name << " with personalized constructor created" << std::endl;
}

// copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &og) : ClapTrap(og)
{
    this->_name = og._name;
}

// assignment operator = 
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &og)
{
    if (this != &og)
    {
        ClapTrap::operator=(og);
        this->_name = og._name;
    }
    return *this;
}

// deconstructor
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap with Name: " << this->_name << " with deconstructor destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

// display both its name and its ClapTrap name
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap with Name: " << this->_name << " and ClapTrap with Name: " << this->ClapTrap::_name << std::endl;
}

void DiamondTrap::setName(const std::string &name)
{
    this->_name = name;
}

const std::string &DiamondTrap::getName() const
{
    return this->_name;
}
