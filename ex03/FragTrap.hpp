/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:47:44 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 18:46:11 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* Once it’s virtual in the intermediate classes (FragTrap & ScavTrap), 
the most derived class (DiamondTrap) automatically knows 
ClapTrap is virtual and should be constructed only once. */ 
class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(); // default constructor
        FragTrap(std::string name); // personalized constructor
        FragTrap(const FragTrap &og); // copy constructor
        FragTrap &operator=(const FragTrap &og); // assignment operator = 
        ~FragTrap(); // deconstructor
        void highFivesGuys(void);
};

#endif