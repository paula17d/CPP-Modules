/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 21:10:29 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/04 21:14:11 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

/*
It randomly instantiates A, B, or C and returns the instance as a Base pointer. 
Feel free to use anything you like for the random choice implementation.
*/
Base* generate(void)
{
    std::srand(time(NULL)); // use current time as starting value so random numbers are different every run
    int randomNum = std::rand() % 3; // 0–2 // number always divided by 3 // gives case number
    // std::cout << randomNum << std::endl;
    
    Base *ptr;
    switch (randomNum)
    {
        case 0:
            ptr = new A();
            break;
        case 1:
            ptr = new B();
            break;
        case 2:
            ptr = new C();
            break;
        default:
            return NULL;
    }
    return ptr;
}

// It prints the actual type of the object pointed to by p: "A", "B", or "C"
void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Type of the object pointed to by p is A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Type of the object pointed to by p is B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Type of the object pointed to by p is C" << std::endl;
    else 
        std::cout << "Unknown Type" << std::endl;
}

/*
It prints the actual type of the object referenced by p: "A", "B", or "C". 
Using a pointer inside this function is forbidden
*/
void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type of the object referenced by p is A" << std::endl;
        return;
    }
    catch(...)
    {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Type of the object referenced by p is B" << std::endl;
        return;
    }
    catch(...)
    {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Type of the object referenced by p is C" << std::endl;
        return;
    }
    catch(...)
    {}
    std::cout << "Unknown Type" << std::endl;
}