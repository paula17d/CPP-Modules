/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:06:02 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/19 22:18:52 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(); // default constructor
        ScavTrap(std::string name); // personalized constructor
        ScavTrap(const ScavTrap &og); // copy constructor
        ScavTrap &operator=(const ScavTrap &og); // assignment operator = 
        ~ScavTrap(); // deconstructor
        void attack(const std::string& target);
        void guardGate();
};

#endif