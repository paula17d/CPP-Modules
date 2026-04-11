/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:20:36 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/11 18:02:12 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>

// • swap: Swaps the values of two given parameters. Does not return anything.
template<typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

/*
min: Compares the two values passed as parameters and returns the smallest one.
If they are equal, it returns the second one.
*/
template<typename T>
T min(const T &a, const T &b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
    
    return b;
}

/*
• max: Compares the two values passed as parameters and returns the greatest one.
If they are equal, it returns the second one.
*/
template<typename T>
T max(const T &a, const T &b)
{
    if (a > b)
        return a;
    else if (b > a)
        return b;
    
    return b;
}

#endif