/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:26 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/04 20:14:45 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// default constructor
Cat::Cat() : _type("Cat")
{
    std::cout << GREEN << "Animal of type " << this->_type 
        << " created with default constructor" << RESET << std::endl;
}

// personalized constructor
Cat::Cat(std::string type) : _type(type)
{
    std::cout << GREEN << "Animal of type " << this->_type 
        << " created with personalized constructor" << RESET << std::endl;
}

// copy constructor
Cat::Cat(const Cat &og)
{
    this->_type = og._type;
}

// assignment operator
Cat &Cat::operator=(const Cat &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    
    return *this;
}

// destructor
Cat::~Cat()
{
    std::cout << RED << "Animal of type " << this->_type 
          << " destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &Cat::getType() const
{
    return this->_type;
}

// setters
void Cat::setType(std::string type)
{
    this->_type = type;
}

void Cat::makeSound() const
{
    std::cout << "Meowwww" << std::endl;
}