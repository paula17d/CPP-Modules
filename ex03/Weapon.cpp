/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:04:27 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/01 17:21:49 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
    return this->_type;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}
