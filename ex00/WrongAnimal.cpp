/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:19 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/08 11:25:13 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// default constructor
WrongAnimal::WrongAnimal() : _type("Animal")
{
    std::cout << GREEN << "WrongAnimal of type " << this->_type 
        << " created with default constructor" << RESET << std::endl;
}

// personalized constructor
WrongAnimal::WrongAnimal(std::string type)
{}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &og)
{
    this->_type = og._type;
}

// assignment operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    
    return *this;
}

// deconstructor
WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal of type " << this->_type 
          << " destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &WrongAnimal::getType() const
{
    return this->_type;
}

// setters
void WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Animal sound (---)" << std::endl;
}
