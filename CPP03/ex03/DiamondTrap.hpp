/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:37:44 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 18:37:43 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/* The diamond problem happens when two classes (ScavTrap & FragTrap) inherit from the same base class (ClapTrap)
and a fourth class inherits from both of them, which leads to multiple copies of the base class and causes ambiguity.
Base class: a class you inherit from
Derived class: a class that inherits
Virtual base: a base class inherited with virtual (ClapTrap)
    -> Only the most derived class (Diamond Trap) is allowed to construct it
Member Ambiguity: when another trap has the same variable name within its class (this->ClapTrap::_name)
Method Ambiguity: when two traps have the same method/function, the derived class needs to specify which one to use 
                  (ScavTrap::attack(target))
*/
class DiamondTrap :  public ScavTrap, public FragTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap(); // default constructor
        DiamondTrap(std::string name); // personalized constructor
        DiamondTrap(const DiamondTrap &og); // copy constructor
        DiamondTrap &operator=(const DiamondTrap &og); // assignment operator = 
        ~DiamondTrap(); // deconstructor
        void attack(const std::string& target);
        void whoAmI();
        void setName(const std::string &name); // setter
        const std::string &getName() const; // getter
};

#endif