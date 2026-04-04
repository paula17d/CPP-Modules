/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 12:43:04 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/04 14:09:39 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

struct Data
{
    int value;
    char symbol;
    Data(int value, char symbol);
};

class Serializer
{
    private:
        // default constructor
        Serializer();
        // copy constructor
        Serializer(const Serializer &other);
        // copy assignment operator
        Serializer& operator=(const Serializer &other);
        // destructor
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif