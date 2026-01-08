/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:14:17 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/08 11:24:30 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// default constructor
Dog::Dog() : _type("Dog")
{
    std::cout << GREEN << "Animal of type " << this->_type 
          << " created with default constructor" << RESET << std::endl;
}

// personalized constructor
Dog::Dog(std::string type) : _type(type)
{
    std::cout << GREEN << "Animal of type " << this->_type 
        << " created with personalized constructor" << RESET << std::endl;
}

// copy constructor
Dog::Dog(const Dog &og)
{
    this->_type = og._type;
}

// assignment operator
Dog &Dog::operator=(const Dog &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    
    return *this;
}

// deconstructor
Dog::~Dog()
{
    std::cout << RED << "Animal of type " << this->_type 
          << " destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &Dog::getType() const
{
    return this->_type;
}

// setters
void Dog::setType(std::string type)
{
    this->_type = type;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound (Bark)" << std::endl;
}
