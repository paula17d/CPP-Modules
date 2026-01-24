/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:14:17 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/24 17:54:46 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// default constructor
Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << GREEN << "[DOG] created with default constructor" << RESET << std::endl;
}

// copy constructor
Dog::Dog(const Dog &og) : Animal(og)
{
    std::cout << GREEN << "[DOG] created with copy constructor" << RESET << std::endl;
}

// assignment operator
Dog &Dog::operator=(const Dog &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    std::cout << GREEN << "[DOG] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// destructor
Dog::~Dog()
{
    std::cout << RED << "[DOG] destroyed with destructor" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound (Bark)" << std::endl;
}
