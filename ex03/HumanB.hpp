/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:59:20 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/01 17:21:41 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
    private: // TODO: private?
        Weapon _weapon;
        std::string _name; 

    public:
        attack();
        HumanB(std::string name); // personalized constructor
};

#endif
