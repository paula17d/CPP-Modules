/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:29 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 17:40:52 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        // default constructor
        WrongCat();
        // copy constructor
        WrongCat(const WrongCat &og);
        // assignment operator
        WrongCat &operator=(const WrongCat &og);
        // destructor
        ~WrongCat();
        // member functions
        void makeSound() const;
};

#endif