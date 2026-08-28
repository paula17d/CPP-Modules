/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 12:43:06 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/04 20:13:41 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
    // Test 1
    std::cout << ORANGE << "Test 1: Serialize" << std::endl;
    Data data(0 , 's'); 
    uintptr_t uIntPtr = Serializer::serialize(&data);
    std::cout << "Address of Pointer (from hexa) = " << &data << std::endl;
    std::cout << "Address of Pointer (converted to uintptr_t) = " << uIntPtr << std::endl;

    // Test 2
    std::cout << ORANGE << "Test 2: Deserialize" << std::endl;
    Data *ptr = Serializer::deserialize(uIntPtr);
    std::cout << "Adress of Pointer (uintptr_t) = " <<  uIntPtr << std::endl;
    std::cout << "Adress of Pointer (converted back) = " << ptr << std::endl;

    return 0;
}
