/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:19 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/04 20:11:47 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// default constructor
Animal::Animal() : _type("None")
{
    std::cout << GREEN << "Animal of type " << this->_type 
        << " created with default constructor" << RESET << std::endl;
}

// personalized constructor
Animal::Animal(std::string type)
{}

// copy constructor
Animal::Animal(const Animal &og)
{
    this->_type = og._type;
}

// assignment operator
Animal &Animal::operator=(const Animal &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    
    return *this;
}

// deconstructor
Animal::~Animal()
{
    std::cout << RED << "Animal of type " << this->_type 
          << " destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &Animal::getType() const
{
    return this->_type;
}

// setters
void Animal::setType(std::string type)
{
    this->_type = type;
}

void Animal::makeSound() const
{
    std::cout << "No sound" << std::endl;
}
