/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:41:40 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/19 22:47:27 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _hitPoints; // (10)
        int _energyPoints; // (10)
        int _attackDamage; // (0)

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