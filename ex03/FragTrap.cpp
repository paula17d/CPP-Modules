/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:47:36 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 18:43:23 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// default constructor
FragTrap::FragTrap()
{
    std::cout << "FragTrap with Name: " << this->_name << " with default constuctor created" << std::endl;
}

// personalized constructor
// : ClapTrap(name) (if wanting to use personalized constructor)
// nothing if wanting to use default constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setName(name);
    this->setHitPoints(100);
    // this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap with Name: " << this->_name << " with personalized constuctor created" << std::endl;
}

// copy constructor
FragTrap::FragTrap(const FragTrap &og) : ClapTrap(og)
{}

// assignment operator =
FragTrap &FragTrap::operator=(const FragTrap &og)
{
    if (this != &og)
    {
        ClapTrap::operator=(og);
    }
    return *this;
}

// deconstructor
FragTrap::~FragTrap()
{
    std::cout << "FragTrap with Name: " << this->_name << " with deconstuctor destroyed" << std::endl;
}

// displays a positive high-fives request on the standard output
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap with Name: " << this->_name << " requests a high-five" << std::endl;
}