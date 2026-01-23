/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:19 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 17:42:47 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// default constructor
WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << GREEN << "[WrongAnimal] created with default constructor" << RESET << std::endl;
}

// personalized constructor
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << GREEN << "[WrongAnimal] created with personalized constructor" << RESET << std::endl;
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &og)
{
    this->_type = og._type;
    std::cout << GREEN << "[WrongAnimal] created with copy constructor" << RESET << std::endl;
}

// assignment operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    std::cout << GREEN << "[WrongAnimal] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// deconstructor
WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "[WrongAnimal] destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Random WrongAnimal sound (---)" << std::endl;
}
