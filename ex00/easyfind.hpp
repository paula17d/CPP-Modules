/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 01:19:43 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/24 01:30:33 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_GREEN "\033[38;5;120m"
#define RESET "\033[0m"

/*
Write a function template easyfind that accepts a type T. 
It takes two parameters:
the first one is of type T, and the second one is an integer.

Assuming T is a container of integers, 
this function has to find the first occurrence of the second parameter 
in the first parameter.

If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave.
*/
template<typename T>
typename T::iterator easyfind(T &container, int num)
{
    typename T::iterator it = std::find(container.begin(), container.end(), num);
    if (it == container.end())
        throw std::runtime_error("Error: value not found.");
    
    return it; 
}

#endif