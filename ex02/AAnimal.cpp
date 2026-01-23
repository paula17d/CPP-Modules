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
    std::cout << GREEN << "[AANIMAL] created with default constructor" << RESET << std::endl;
}

// personalized constructor
AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << GREEN << "[AANIMAL] created with personalized constructor" << RESET << std::endl;
}

// copy constructor
AAnimal::AAnimal(const AAnimal &og)
{
    this->_type = og._type;
    std::cout << GREEN << "[AANIMAL] created with copy constructor" << RESET << std::endl;
}

// assignment operator
AAnimal &AAnimal::operator=(const AAnimal &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    std::cout << GREEN << "[AANIMAL] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// deconstructor
AAnimal::~AAnimal()
{
    std::cout << RED << "[AANIMAL] destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &AAnimal::getType() const
{
    return this->_type;
}

void AAnimal::makeSound() const
{
    std::cout << "Random AAnimal sound (---)" << std::endl;
}
