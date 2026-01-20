/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:32:38 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/20 12:53:53 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Test 1: constructors & destructors, correct names (_type) of classes
    Animal animal;
    Cat cat;
    Dog dog;

    // Test 2 (TEST SUBJECT): polymorphism (specific sounds of the dog and cat classes)
    /*
        Function (getType & makeSound) are declared virtual in base class. 
        Derived class's implementation is called based on the actual object type 
        (even when accessed through a base class pointer)
    */
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;
    
    // Test 3: effects of using inheritance without virtual
    const WrongAnimal* meta9 = new WrongAnimal();
    const Animal* j9 = new Dog();
    const WrongAnimal* i9 = new WrongCat();
    
    std::cout << j9->getType() << " " << std::endl;
    std::cout << i9->getType() << " " << std::endl;
    i9->makeSound(); //will output the WrongCat sound!
    j9->makeSound();
    meta9->makeSound();
    
    delete meta9;
    delete j9;
    delete i9;
    
    return 0;
}
