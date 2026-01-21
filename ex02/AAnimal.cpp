/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:19 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/21 17:58:50 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// default constructor
AAnimal::AAnimal() : _type("AAnimal")
{
    std::cout << GREEN << "AAnimal of type " << this->_type 
        << " created with default constructor" << RESET << std::endl;
}

// personalized constructor
AAnimal::AAnimal(std::string type)
{}

// copy constructor
AAnimal::AAnimal(const AAnimal &og)
{
    this->_type = og._type;
}

// assignment operator
AAnimal &AAnimal::operator=(const AAnimal &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    
    return *this;
}

// deconstructor
AAnimal::~AAnimal()
{
    std::cout << RED << "AAnimal of type " << this->_type 
          << " destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &AAnimal::getType() const
{
    return this->_type;
}

// setters
void AAnimal::setType(std::string type)
{
    this->_type = type;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound (---)" << std::endl;
}
