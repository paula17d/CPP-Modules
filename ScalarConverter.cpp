/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:48:49 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/04 00:19:09 by pdrettas         ###   ########.fr       */
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

// Examples of char literals: ’c’, ’a’, ...
void ScalarConverter::convertAndPrintChar(std::string &input)
{
    try
    {
        std::cout << "char: ";
        // if 'a' & one letter -> just print that letter
        if (input.length() == 1 && isalpha(input[0])) // to ensure it's a letter
        {
            std::cout << input[0] << std::endl;
        }
        // if digit -> convert to letter w ascii help (printable range 32 to 126 (must be one character))
        else
        {
            int var = std::stoi(input);
            if (!isprint(var)) // no manual ascii 32-126 check necessary 
                throw std::invalid_argument("non displayable");
            // convert number to corressponding char
            char c = static_cast<char>(var);
            std::cout << c << std::endl;
        }
    }
    catch (const std::invalid_argument &e)
    {
        std::cout << "non displayable" << std::endl; // out of ascii range 32-126
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

// Examples of int literals: 0, -42, 42...
void ScalarConverter::convertAndPrintInt(std::string &input)
{
    try
    {
        std::cout << "int: ";
        int var = std::stoi(input);
        std::cout << var << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

/*
Examples of float literals: 0.0f, -4.2f, 4.2f...
You have to handle these pseudo-literals as well: 
-inff: negative infinity, overflow
+inff: positive infinity, overflow
nanf: not-a-number, result of invalid math operations, like 0.0/0.0
*/
void ScalarConverter::convertAndPrintFloat(std::string &input)
{
    try 
    {
        std::cout << "float: ";
        // check for pseudo-literals
        if (input == "-inff" || input == "+inff" || input == "nanf")
            std::cout << input << std::endl;
        else if (input == "-inf" || input == "+inf" || input == "nan") // for double needed to convert to float format
            std::cout << input + "f" << std::endl;
        else
        {
            float var = std::stof(input);
            
            // send a seperate stream into a string first (bc if using std::fixed, std::cout will continue to use this format after as well)
            std::ostringstream oss;
            oss << std::fixed << var << "f";
            
            // now use this stream seperated in std::cout without lasting changes after
            std::cout << oss.str() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

/*
Examples of float literals: 0.0, -4.2, 4.2...
You have to handle these pseudo-literals as well: 
-inf: negative infinity, overflow
+inf: positive infinity, overflow
nan: not-a-number, result of invalid math operations, like 0.0/0.0
*/
void ScalarConverter::convertAndPrintDouble(std::string &input)
{
    try
    {
        std::cout << "double: ";
        // check for pseudo-literals
        if (input == "-inf" || input == "+inf" || input == "nan") // for double
            std::cout << input << std::endl;
        else if (input == "-inff" || input == "+inff" || input == "nanf") // for float needed to convert to double format
        {
            std::string withoutF = input.substr(0, input.length() - 1);
            std::cout << withoutF << std::endl;
        }
        else
        {
            double var = std::stod(input);

            // send a seperate stream into a string first (bc if using std::fixed, std::cout will continue to use this format after as well)
            std::ostringstream oss;
            oss << std::fixed << var;
            
            // now use this stream seperated in std::cout without lasting changes after
            std::cout << oss.str() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

/*
will take as a parameter a string representation of a C++ literal in its most common
form and output its value in the following series of scalar types:
char, int, float, double

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
