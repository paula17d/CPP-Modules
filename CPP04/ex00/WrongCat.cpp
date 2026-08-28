/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:26 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 17:41:51 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// default constructor
WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << GREEN << "[WrongCat] created with default constructor" << RESET << std::endl;
}

// copy constructor
WrongCat::WrongCat(const WrongCat &og) : WrongAnimal(og)
{
    // this->_type = og._type;
    std::cout << GREEN << "[WrongCat] created with copy constructor" << RESET << std::endl;
}

// assignment operator
WrongCat &WrongCat::operator=(const WrongCat &og) 
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    std::cout << GREEN << "[WrongCat] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// destructor
WrongCat::~WrongCat()
{
    std::cout << RED << "[WrongCat] destroyed with destructor" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound (Meowwww)" << std::endl;
}