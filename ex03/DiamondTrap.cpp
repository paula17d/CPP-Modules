/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:37:46 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 18:54:23 by pauladretta      ###   ########.fr       */
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

// copy constructor // TODO: fix copy constructor with either Scav or Frag?
DiamondTrap::DiamondTrap(const DiamondTrap &og) : ClapTrap(og)
{
   // alles richtig kopiert in mian (zweiter test) aber name aendern (im terminal kein output bei two name)
}

// assignment operator = // TODO: fix ft with either Scav or Frag?
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &og)
{
    if (this != &og)
    {
        ClapTrap::operator=(og);
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
