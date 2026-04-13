/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 14:55:32 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/13 14:10:10 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*
operator[] replaces the need to write arr._elements[index]
but instead can write arr[index]
*/
int main ()
{
    // TEST 1: default constructor (empty array)
    std::cout << BLUE << "*** TEST 1: default constructor ***" << RESET << std::endl;
    Array<int> arr;
    
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << "arr[ " << i << " ] = " << arr[i] << std::endl;
    }

    // TEST 2: personalized constructor (array with specific size)
    std::cout << BLUE << "*** TEST 2: personalized constructor ***" << RESET << std::endl;
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

    // TEST 3: copy constructor
    std::cout << BLUE << "*** TEST 3: copy constructor ***" << RESET << std::endl;
    Array<int> newArr(arra);
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr[i] << std::endl;
    }
    arra[0] = 7; // newArr[0] should not change
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr[i] << std::endl;
    }
    
    // TEST 4: copy assignment operator
    std::cout << BLUE << "*** TEST 4: copy assignment operator ***" << RESET << std::endl;
    newArr = arra;
    for (int i = 0; i < newArr.size(); i++)
    {
        std::cout << "newArr[ " << i << " ] = " << newArr[i] << std::endl;
    }

    // TEST 5: index out of bounds
    std::cout << BLUE << "*** TEST 5: index out of bounds ***" << RESET << std::endl;
    try
    {
        // index within existing index range
        newArr[2] = 8;
        // give value to a non-existing index in the array
        newArr[-1] = 8;
        newArr[4] = 8;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    // TEST 6: class template works with complex types
    std::cout << BLUE << "*** TEST 6: using complex types ***" << RESET << std::endl;
    class Person
    {
        public:
            std::string name;
            int age;
            Person() : name("unknown"), age(0) {}
            Person(std::string n, int a) : name(n), age(a) {}
    };
    
    Array<Person> people(2);

    people[0] = Person("Alice", 30);
    people[1] = Person("Bob", 25);

    for (int i = 0; i < people.size(); i++)
    {
        std::cout << people[i].name << ", " << people[i].age << std::endl;
    }
    
    return 0;
}