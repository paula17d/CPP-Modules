/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:26 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/08 23:38:59 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// default constructor
Cat::Cat() : _type("Cat")
{
    _brain = new Brain();
    
    std::cout << GREEN << "Animal of type " << this->_type 
        << " created with default constructor" << RESET << std::endl;
}

// copy constructor
// create a new Brain by copying the contents (ex. array) of the Brain that og.brain points to
Cat::Cat(const Cat &og)
{
    this->_type = og._type;
    this->_brain = new Brain(*og._brain);
}

// assignment operator
Cat &Cat::operator=(const Cat &og)
{
    if (this != &og)
    {
        this->_type = og._type;
        this->_brain = new Brain(*og._brain);
    }
    
    return *this;
}

// destructor
Cat::~Cat()
{
    delete _brain;
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
    std::cout << "Cat sound (Meowwww)" << std::endl;
}