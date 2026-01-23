/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:19 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 17:28:19 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// default constructor
Animal::Animal() : _type("Animal")
{
    std::cout << GREEN << "[ANIMAL] created with default constructor" << RESET << std::endl;
}

// personalized constructor
Animal::Animal(std::string type) : _type(type)
{
    std::cout << GREEN << "[ANIMAL] created with personalized constructor" << RESET << std::endl;
}

// copy constructor
Animal::Animal(const Animal &og)
{
    this->_type = og._type;
    std::cout << GREEN << "[ANIMAL] created with copy constructor" << RESET << std::endl;
}

// assignment operator
Animal &Animal::operator=(const Animal &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    std::cout << GREEN << "[ANIMAL] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// deconstructor
Animal::~Animal()
{
    std::cout << RED << "[ANIMAL] destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Random Animal sound (---)" << std::endl;
}
