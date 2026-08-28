/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:14:17 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 18:27:39 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// default constructor
Dog::Dog() : Animal()
{
    _brain = new Brain();
    _type = "Dog";
    std::cout << GREEN << "[DOG] created with default constructor" << RESET << std::endl;
}

// copy constructor
// create a new Brain by copying the contents (ex. array) of the Brain that og.brain points to
Dog::Dog(const Dog &og) : Animal(og)
{
    this->_brain = new Brain(*og._brain);
    std::cout << GREEN << "[DOG] created with copy constructor" << RESET << std::endl;
}

// assignment operator
Dog &Dog::operator=(const Dog &og)
{
    if (this != &og)
    {
        this->_type = og._type;
        this->_brain = new Brain(*og._brain);
    }
    std::cout << GREEN << "[DOG] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// deconstructor
Dog::~Dog()
{
    delete _brain;
    std::cout << RED << "[DOG] destroyed with destructor" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound (Bark)" << std::endl;
}
