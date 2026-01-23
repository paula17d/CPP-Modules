/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:14:15 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/23 18:35:41 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    
    public:
        // default constructor
        Dog();
        // copy constructor
        Dog(const Dog &og);
        // assignment operator
        Dog &operator=(const Dog &og);
        // destructor
        ~Dog();
        // member functions
        void makeSound() const;
};

#endif