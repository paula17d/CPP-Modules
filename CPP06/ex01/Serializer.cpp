/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 12:43:02 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/04 14:19:47 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Data::Data(int value, char symbol) : value(value), symbol(symbol)
{
    std::cout << GREEN << "Data created with default constructor." << RESET << std::endl;
}

// constructor
Serializer::Serializer()
{
    std::cout << GREEN << "Serializer created with default constructor." << RESET << std::endl;
}

// copy constructor
Serializer::Serializer(const Serializer &other)
{
    std::cout << GREEN << "Serializer created with copy constructor." << RESET << std::endl;
}

// copy assignment operator
Serializer& Serializer::operator=(const Serializer &other)
{
    if (this != &other)
    {}
    
    std::cout << GREEN << "Serializer created with copy assignment operator." << RESET << std::endl;
    
    return *this;
}

// destructor
Serializer::~Serializer()
{
    std::cout << RED << "Serializer destroyed with destructor." << RESET << std::endl;
}

// It takes a pointer and converts it to the unsigned integer type uintptr_t.
uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t uIntPtr = reinterpret_cast<uintptr_t>(ptr); // converting between !unrelated! types
    return uIntPtr;
}

// It takes an unsigned integer parameter and converts it to a pointer to Data.
Data* Serializer::deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}
