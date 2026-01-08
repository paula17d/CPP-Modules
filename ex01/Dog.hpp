/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:14:15 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/04 20:14:42 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    protected:
        std::string _type;
    
    public:
        // default constructor
        Dog();
        // personalized constructor
        Dog(std::string type);
        // copy constructor
        Dog(const Dog &og);
        // assignment operator
        Dog &operator=(const Dog &og);
        // destructor
        ~Dog();
        // getters
        const std::string &getType() const;
        // setters
        void setType(std::string type);
        // member functions
        void makeSound() const;
};

#endif