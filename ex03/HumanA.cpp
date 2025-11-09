/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:08:38 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/05 10:55:32 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// personalized constructor
HumanA::HumanA(std::string name, Weapon &weapon) : 
    _weapon(weapon), _name(name)
{}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
