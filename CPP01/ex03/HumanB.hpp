/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:59:20 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/09 20:46:12 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
    private:
        Weapon *_weapon;
        std::string _name; 

    public:
        void attack();
        HumanB(std::string name); // personalized constructor
        void setWeapon(Weapon &weapon); 
};

#endif
