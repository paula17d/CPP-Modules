/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:31:13 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/03 23:19:55 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>
#include <sstream>
#include <iomanip>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_GREEN "\033[38;5;120m"
#define RESET "\033[0m"

enum Type {CHAR, INT, FLOAT, DOUBLE};

class ScalarConverter
{
    private:
        // constructor
        ScalarConverter();
        // copy constructor
        ScalarConverter(const ScalarConverter &other);
        // copy assignment operator
        ScalarConverter &operator=(const ScalarConverter &other);
        // destructor
        ~ScalarConverter();

    public:
        // if not static, then belongs to instance of the class
        // if static, then belongs to class but no object needed to call, instead ClassName::function()
        static void convert(std::string input);
        static void convertAndPrintChar(std::string &input);
        static void convertAndPrintInt(std::string &input);
        static void convertAndPrintFloat(std::string &input);
        static void convertAndPrintDouble(std::string &input);
};

#endif