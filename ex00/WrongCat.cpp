/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:26 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/04 20:29:22 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// default constructor
WrongCat::WrongCat() : _type("WrongCat")
{
    std::cout << GREEN << "Animal of type " << this->_type 
        << " created with default constructor" << RESET << std::endl;
}

// personalized constructor
WrongCat::WrongCat(std::string type) : _type(type)
{
    std::cout << GREEN << "Animal of type " << this->_type 
        << " created with personalized constructor" << RESET << std::endl;
}

// copy constructor
WrongCat::WrongCat(const WrongCat &og)
{
    this->_type = og._type;
}

// assignment operator
WrongCat &WrongCat::operator=(const WrongCat &og)
{
    if (this != &og)
    {
        this->_type = og._type;
    }
    
    return *this;
}

// destructor
WrongCat::~WrongCat()
{
    std::cout << RED << "Animal of type " << this->_type 
          << " destroyed with destructor" << RESET << std::endl;
}

// getters
const std::string &WrongCat::getType() const
{
    return this->_type;
}

// setters
void WrongCat::setType(std::string type)
{
    this->_type = type;
}

void WrongCat::makeSound() const
{
    std::cout << "Meowwww" << std::endl;
}