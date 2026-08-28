/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:59:20 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/06 16:44:17 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
    private:
        Weapon &_weapon; 
        std::string _name; 

    public:
        void attack();
        HumanA(std::string name, Weapon &weapon); // personalized constructor
};

#endif