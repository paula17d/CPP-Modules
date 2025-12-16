/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:06:02 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/14 19:47:25 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:


    public:
        ScavTrap(); // default constructor
        ScavTrap(std::string name); // personalized constructor
        ScavTrap(const ScavTrap &og); // copy constructor
        ScavTrap &operator=(const ScavTrap &og); // assignment operator = 
        ~ScavTrap(); // deconstructor
        void guardGate();
};

#endif