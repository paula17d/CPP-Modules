/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:47:44 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 13:47:46 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap(); // default constructor
        FragTrap(std::string name); // personalized constructor
        FragTrap(const FragTrap &og); // copy constructor
        FragTrap &operator=(const FragTrap &og); // assignment operator = 
        ~FragTrap(); // deconstructor
        void highFivesGuys(void);
};

#endif