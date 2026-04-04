/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 12:43:06 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/04 14:38:55 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
    // Test 1 // TODO: print test 1 header 
    // Data data(0 , 's'); 
    // uintptr_t uIntPtr = Serializer::serialize(&data);
    // std::cout << "Address of Pointer (from hexa) = " << &data << std::endl;
    // std::cout << "Address of Pointer (converted to uintptr_t) = " << uIntPtr << std::endl;




    // Test 2
    Data data(88, 'a');
    uintptr_t uIntPtr = reinterpret_cast<uintptr_t>(&data);
    
    Data *ptr = Serializer::deserialize(uIntPtr);
    std::cout << "Adress of Pointer (uintptr_t) = " <<  uIntPtr << std::endl;
    std::cout << "Adress of Pointer (converted back) = " << ptr << std::endl;

    return 0;
}
