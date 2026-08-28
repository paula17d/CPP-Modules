/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:26 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 18:31:10 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// default constructor
Cat::Cat() : AAnimal()
{
    _brain = new Brain();
    _type = "Cat";
    std::cout << GREEN << "[CAT] created with default constructor" << RESET << std::endl;
}

// copy constructor
// create a new Brain by copying the contents (ex. array) of the Brain that og.brain points to
Cat::Cat(const Cat &og) : AAnimal(og)
{
    this->_brain = new Brain(*og._brain);
    std::cout << GREEN << "[CAT] created with copy constructor" << RESET << std::endl;
}

// assignment operator
Cat &Cat::operator=(const Cat &og)
{
    if (this != &og)
    {
        this->_type = og._type;
        this->_brain = new Brain(*og._brain);
    }
    std::cout << GREEN << "[CAT] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// destructor
Cat::~Cat()
{
    delete _brain;
    std::cout << RED << "[CAT] destroyed with destructor" << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound (Meowwww)" << std::endl;
}