/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:47:44 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/19 22:59:11 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

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