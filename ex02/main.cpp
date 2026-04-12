/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 14:55:32 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/12 17:29:25 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*
operator[] replaces the need to write arr._elements[index]
but instead can write arr[index]
*/
int main ()
{
    // Test 1: default constructor
    Array<int> arr;
    
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << "arr[ " << i << " ] = " << arr[i] << std::endl;
    }

    // Test 2: personalized constructor
    Array<int> arra(4);
    for (int i = 0; i < arra.size(); i++)
    {
        std::cout << "arra[ " << i << " ] = " << arra[i] << std::endl;
    }
   
    for (int i = 0; i < arra.size(); i++)
    {
        arra[i] = i;
    }
    
    for (int i = 0; i < arra.size(); i++)
    {
        std::cout << "arra[ " << i << " ] = " << arra[i] << std::endl;
    }

    // Test 3: copy constructor
    Array newArr(arra);
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr[i] << std::endl;
    }
    arra[0] = 7;
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr[i] << std::endl;
    }
    
    // Test 4: copy assignment operator
    newArr = arra;
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr[i] << std::endl;
    }

    // Test 5: index out of bounds
    try
    {
        // give value to a non-existing index in the array
        newArr[-1] = 8;
        newArr[4] = 8;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}