/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:06:20 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/11 19:10:09 by pauladretta      ###   ########.fr       */
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
    // Test 1 
    int arr[] = {0, 1, 2, 3};
    size_t arrLen = sizeof(arr) / sizeof(int);
    iter(arr, arrLen, print<int>);

    // Test 2
    char arr1[] = {'a', 'b', 'c', 'd'};
    size_t arr1Len = sizeof(arr1) / sizeof(char);
    iter(arr1, arr1Len, print<char>);

    return 0;
}  
