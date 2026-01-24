/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:19 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/24 17:55:05 by pdrettas         ###   ########.fr       */
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

// destructor
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
