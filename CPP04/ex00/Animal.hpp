/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:12 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 17:36:52 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

/*
adding 'virtual' to functions that want to 
be overridden by derived classes later on

overriding rules
function signature must match exactly to override:
- name, parameters, const qualifier (if used)
*/

class Animal
{
    protected:
        std::string _type;
    
    public:
        // default constructor
        Animal();
        // personalized constructor
        Animal(std::string type);
        // copy constructor
        Animal(const Animal &og);
        // assignment operator
        Animal &operator=(const Animal &og);
        // destructor
        virtual ~Animal();
        // getters
        const std::string &getType() const;
        // member functions
        virtual void makeSound() const;
};

#endif
