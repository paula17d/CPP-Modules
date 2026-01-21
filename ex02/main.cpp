/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:32:38 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/21 18:51:35 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() 
{
    // Test 0 (should give a compile error about the class being abstract)
    // AAnimal test;
    
    // Test 1 (TEST SUBJECT)
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;

    // Test 2 (deep copy of brain of dogs (and cats), not a shallow copy)
    Dog basic;
    Dog tmp = basic; // calls adjusted copy constructor w deep copy & allocates a new Brain 

    // Test 3
    /* In your main function, create and fill an array of AAnimal objects. 
    Half of it will be Dog objects and the other half will be Cat objects. */
    int size = 10;
    AAnimal *AAnimal[size];
    for (int i = 0; i < size; i++)
    {
        if (i < (size/2))
        {
            AAnimal[i] = new Dog();
            AAnimal[i]->makeSound();
        }
        else if (i >= (size/2))
        {
            AAnimal[i] = new Cat();
            AAnimal[i]->makeSound();
        }
    }
    /* At the end of your program execution, loop over this array and delete every AAnimal. 
    You must delete directly dogs and cats as AAnimals. 
    The appropriate destructors must be called in the expected order */    
    for (int i = 0; i < size; i++)
    {
        delete AAnimal[i];
    }

    return 0;
}
