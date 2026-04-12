/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 14:55:32 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/12 16:28:53 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
    // Test 1: default constructor
    Array<int> arr;
    
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << "arr[ " << i << " ] = " << arr._elements[i] << std::endl;
    }

    // Test 2: personalized constructor
    Array<int> arra(4);
    for (int i = 0; i < arra.size(); i++)
    {
        std::cout << "arra[ " << i << " ] = " << arra._elements[i] << std::endl;
    }
   
    for (int i = 0; i < arra.size(); i++)
    {
        arra._elements[i] = i;
        // std::cout << "arra[ " << i << " ] = " << arra._elements[i] << std::endl;
    }
    
    for (int i = 0; i < arra.size(); i++)
    {
        std::cout << "arra[ " << i << " ] = " << arra._elements[i] << std::endl;
    }

    // Test 3: copy constructor
    Array newArr(arra);
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr._elements[i] << std::endl;
    }
    arra._elements[0] = 7;
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr._elements[i] << std::endl;
    }
    
    // Test 4: copy assignment operator
    newArr = arra;
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr._elements[i] << std::endl;
    }

    return 0;
}