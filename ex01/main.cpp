/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:06:20 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/13 13:31:44 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void print(T a)
{
    std::cout << a << std::endl;
}

int main ()
{
    // TEST 1 
    std::cout << BLUE << "*** TEST 1: iterate through int array ***" << RESET << std::endl;
    int arr[] = {0, 1, 2, 3};
    size_t arrLen = sizeof(arr) / sizeof(int); // # of elements = total bytes of array / bytes per element
    iter(arr, arrLen, print<int>);

    // Test 2
    std::cout << BLUE << "*** TEST 2: iterate through char array ***" << RESET << std::endl;
    char arr1[] = {'a', 'b', 'c', 'd'};
    size_t arr1Len = sizeof(arr1) / sizeof(char);
    iter(arr1, arr1Len, print<char>);

    return 0;
}  
