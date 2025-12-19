/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:06:02 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 18:46:07 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

/* Once it’s virtual in the intermediate classes (FragTrap & ScavTrap), 
the most derived class (DiamondTrap) automatically knows 
ClapTrap is virtual and should be constructed only once. */ 
class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(); // default constructor
        ScavTrap(std::string name); // personalized constructor
        ScavTrap(const ScavTrap &og); // copy constructor
        ScavTrap &operator=(const ScavTrap &og); // assignment operator = 
        ~ScavTrap(); // deconstructor
        void guardGate();
};

#endif