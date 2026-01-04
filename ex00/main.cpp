/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:32:38 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/04 20:35:59 by pdrettas         ###   ########.fr       */
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
    // Animal animal;
    // Cat cat;
    // Dog dog;

    // Test 2: specific sounds of the dog and cat classes
    // Test Subject
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    // ...
    
    // add delete (bc of new) in this test subjedct
    
    // TODO: last task in subject: WrongCat & WrongAnimal
    // Test 3:
    const WrongAnimal* meta9 = new WrongAnimal();
    const Animal* j9 = new Dog();
    const WrongAnimal* i9 = new WrongCat();
    
    std::cout << j9->getType() << " " << std::endl;
    std::cout << i9->getType() << " " << std::endl;
    i9->makeSound(); //will output the cat sound!
    j9->makeSound();
    meta9->makeSound();
    
    
    return 0;
}