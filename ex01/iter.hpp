/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:06:21 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/11 19:08:25 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

/*
Implement a function template iter that takes 3 parameters and returns nothing.
• The first parameter is the address of an array
• The second one is the length of the array, passed as a const value.
• The third one is a function that will be called on every element of the array.

Your iter function template must work with any type of array. 
The third parameter can be an instantiated function template.

The function passed as the third parameter may take its argument by const reference
or non-const reference, depending on the context.
*/
template<typename T, typename F>
void iter(T *arr, const size_t len, F ft)
{
    for (int i = 0; i < len; i++)
    {
        ft(arr[i]);
    }

}

#endif