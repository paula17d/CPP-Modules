/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:41:40 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 18:17:31 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        // Name, which is passed as a parameter to the constructor
        std::string _name;
        // Hit points (10), representing the health of the ClapTrap
        int _hitPoints;
        // Energy points (10)
        int _energyPoints;
        // Attack damage (0)
        int _attackDamage;

    public:
        ClapTrap(); // default constructor
        ClapTrap(std::string name); // personalized constructor
        ClapTrap(const ClapTrap &og); // copy constructor
        ClapTrap &operator=(const ClapTrap &og); // assignment operator = 
        ~ClapTrap(); // deconstructor
        // getters
        const std::string &getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        // setters
        void setName(const std::string &name);
        void setHitPoints(int hitPoints);
        void setEnergyPoints(int energyPoints);
        void setAttackDamage(int attackDamage);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif