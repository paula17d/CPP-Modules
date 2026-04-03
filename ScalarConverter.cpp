/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:48:49 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/03 23:25:56 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// constructor
ScalarConverter::ScalarConverter()
{
    std::cout << GREEN << "ScalarConverter created with default constructor." << RESET << std::endl;
}

// copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    std::cout << GREEN << "ScalarConverter created with copy constructor." << RESET << std::endl;
}

// copy assignment operator
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other)
    {}
    
    std::cout << GREEN << "ScalarConverter created with copy assignment operator." << RESET << std::endl;
    
    return *this;
}

// destructor
ScalarConverter::~ScalarConverter()
{
    std::cout << RED << "ScalarConverter destroyed with destructor." << RESET << std::endl;
}

void ScalarConverter::convertAndPrintChar(std::string &input)
{
    try
    {
        // ...
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void ScalarConverter::convertAndPrintInt(std::string &input)
{
    try
    {
        std::cout << "int: ";
        int var1 = std::stoi(input);
        std::cout << var1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void ScalarConverter::convertAndPrintFloat(std::string &input)
{
    try 
    {
        std::cout << "float: ";
        float var2 = std::stof(input);
        
        // send a seperate stream into a string first (bc if using std::fixed, std::cout will continue to use this format after as well)
        std::ostringstream oss;
        oss << std::fixed << var2 << "f";
        
        // now use this stream seperated in std::cout without lasting changes after
        std::cout << oss.str() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void ScalarConverter::convertAndPrintDouble(std::string &input)
{
    try
    {
        std::cout << "double: ";
        double var3 = std::stod(input);

        // send a seperate stream into a string first (bc if using std::fixed, std::cout will continue to use this format after as well)
        std::ostringstream oss;
        oss << std::fixed << var3;
        
        // now use this stream seperated in std::cout without lasting changes after
        std::cout << oss.str() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}


/*
will take as a parameter a string representation of a C++ literal in its most common
form and output its value in the following series of scalar types:
• char 65-90 and 97-122 and others as well
• int 25 or -3
• float 3.14f
• double 1.124344
- and more ... in subject but do later

*/
/*
SUBJECT STRUCTURE

1. You have to first detect the type of the literal passed as a parameter, 
2. convert it from string to its actual type, 
3. then convert it explicitly to the three other data types.
4. display results.
*/
void ScalarConverter::convert(std::string input)
{
    convertAndPrintChar(input);
    convertAndPrintInt(input);
    convertAndPrintFloat(input);
    convertAndPrintDouble(input);    
}
