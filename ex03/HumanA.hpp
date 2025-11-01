/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:59:20 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/01 17:21:28 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
    private: // TODO: private?
        Weapon _weapon;
        std::string _name; 

    public:
        attack();
        HumanA(Weapon weapon, std::string name); // personalized constructor
};

#endif
