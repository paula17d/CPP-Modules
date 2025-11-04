/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:04:27 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/04 20:57:17 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

// Personalized constructor
Weapon::Weapon(std::string type) : 
    _type(type)
{}

const std::string &Weapon::getType() const
{
    return this->_type;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{}