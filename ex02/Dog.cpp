/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:14:17 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/08 23:39:09 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// default constructor
Dog::Dog() : _type("Dog")
{
    _brain = new Brain();
    
    std::cout << GREEN << "Animal of type " << this->_type 
          << " created with default constructor" << RESET << std::endl;
}

// copy constructor
// create a new Brain by copying the contents (ex. array) of the Brain that og.brain points to
Dog::Dog(const Dog &og)
{
    this->_type = og._type;
    this->_brain = new Brain(*og._brain);
}

// assignment operator
Dog &Dog::operator=(const Dog &og)
{
    if (this != &og)
    {
        this->_type = og._type;
        this->_brain = new Brain(*og._brain);
    }
    
    return *this;
}

// deconstructor
Dog::~Dog()
{
    delete _brain;
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
