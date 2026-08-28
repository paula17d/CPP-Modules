/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 13:51:03 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/13 14:17:31 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <string>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_GREEN "\033[38;5;120m"
#define RESET "\033[0m"

template<typename T>
class Array
{
    private:
        T *_elements;
        unsigned int _size;

    public:
        // default constructor
        Array();
        // personalized constructor
        Array( unsigned int size);
        // copy constructor
        Array(const Array &other);
        // copy assignment operator
        Array &operator=(const Array &other);
        // destructor
        ~Array();
        // getters
        unsigned int size() const;
        // operator
        T& operator[](int index);
        // exception
        class OutOfBounds : public std::exception
        {
            public:
                const char *what() const noexcept;
        };
};

// default constructor
template<typename T>
Array<T>::Array() : _elements(NULL), _size(0)
{
    std::cout << GREEN << "Array created with default constructor." << RESET << std::endl;   
}

/*
T → “just create it” (may leave it uninitialized)
T() → “create it and initialize it to a default value”
*/
// personalized constructor
template<typename T>
Array<T>::Array(unsigned int size)
{
    _size = size;
    _elements = new T[size]();

    std::cout << GREEN << "Array created with personalized constructor." << RESET << std::endl;   
}

/*
Construction by copy and assignment operator. 
In both cases, modifying either the original array 
or its copy after copying musn’t affect the other array
-> w deep copy
*/
// copy constructor
template<typename T>
Array<T>::Array(const Array &other) // no need to free old memory bc object doesn't exist yet
{
    this->_size = other._size;
    
    this->_elements = new T[other._size](); // create deep copy (no shallow copy)
    for (int i = 0; i < other._size; i++)
    {
        this->_elements[i] = other._elements[i];
    }
    
    std::cout << GREEN << "Array created with copy constructor." << RESET << std::endl;   
}

// copy assignment operator
template<typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] this->_elements; // free old memory to make "space" for new one
        
        this->_size = other._size;
    
        this->_elements = new T[other._size](); // create deep copy (no shallow copy)
        for (int i = 0; i < other._size; i++)
        {
            this->_elements[i] = other._elements[i];
        }
    }
    
    std::cout << GREEN << "Array created with copy assignment operator." << RESET << std::endl;   

    return *this;
}

// destructor
template<typename T>
Array<T>::~Array()
{
    delete[] this->_elements; // used for arrays, calls destructor every element
    
    std::cout << RED << "Array destroyed with destructor." << RESET << std::endl;
}

// getters
template<typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

// operator overloading
template<typename T>
T& Array<T>::operator[](int index)
{
    if (index < 0)
        throw OutOfBounds();
    else if (index >= (_size))
        throw OutOfBounds();
    return _elements[index];
}

// exception
template<typename T>
const char *Array<T>::OutOfBounds::what() const noexcept
{
    return "Index is out of bounds.";
}

#endif