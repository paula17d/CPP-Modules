/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:08:38 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/04 20:56:28 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

// personalized constructor
HumanB::HumanB(std::string name) :
     _weapon(nullptr), _name(name)
{}

void HumanB::attack()
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

/*
Takes a reference to a Weapon object as its input. 
Inside, we take that reference (the actual object itself)
and assign its address to the _weapon pointer member.
*/
void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon; // & memory address 
}