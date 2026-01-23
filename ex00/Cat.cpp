/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:26 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 17:22:47 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// default constructor
Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << GREEN << "[CAT] created with default constructor" << RESET << std::endl;
}

// copy constructor
Cat::Cat(const Cat &og) : Animal(og)
{
    // this->_type = og._type;
    std::cout << GREEN << "[CAT] created with copy constructor" << RESET << std::endl;
}

// assignment operator
Cat &Cat::operator=(const Cat &og) 
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    std::cout << GREEN << "[CAT] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// destructor
Cat::~Cat()
{
    std::cout << RED << "[CAT] destroyed with destructor" << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound (Meowwww)" << std::endl;
}