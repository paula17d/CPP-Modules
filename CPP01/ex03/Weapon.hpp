/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:11:04 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/04 19:26:46 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string _type; 

    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string &getType() const; // returns a constant reference to type
        void setType(std::string type); // sets type using the new value passed as a parameter
};

#endif
