/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:32:38 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/09 00:24:39 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() // TODO: check for leaks valgrind && deepen deep vs shallow copy
{
    // Test 1 (TEST SUBJECT)
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;

    // Test 2 (deep copy of brain of dogs (and cats), not a shallow copy)
    Dog basic;
    Dog tmp = basic; // calls adjusted copy constructor w deep copy & allocates a new Brain 

    // Test 3
    /* In your main function, create and fill an array of Animal objects. 
    Half of it will be Dog objects and the other half will be Cat objects. */
    int size = 10;
    Animal *animal[size];
    for (int i = 0; i < size; i++)
    {
        if (i < (size/2))
        {
            animal[i] = new Dog();
            animal[i]->makeSound();
        }
        else if (i >= (size/2))
        {
            animal[i] = new Cat();
            animal[i]->makeSound();
        }
    }
    /* At the end of your program execution, loop over this array and delete every Animal. 
    You must delete directly dogs and cats as Animals. 
    The appropriate destructors must be called in the expected order */    
    for (int i = 0; i < size; i++)
    {
        delete animal[i];
    }

    return 0;
}
