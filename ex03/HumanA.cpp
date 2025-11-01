/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:08:38 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/01 16:51:35 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// personalized constructor
HumanA(Weapon weapon, std::string name)
{
    this->_weapon = weapon;
    this->_name = name;
}

HumanA::attack()
{
    // display below
    // <name> attacks with their <weapon type>
    std::cout << _name << "attacks with their " << _weapon << std::endl;
}