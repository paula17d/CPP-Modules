/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:12 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/22 17:44:25 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

/*
function makeSound is not virtual like in the Animal class,
because WrongCat should output the WrongAnimal sound.
Meaning that the Animal makeSound function should not be overridden
by the Cat makeSound function.
Virtual Destructor: if deleting a derived object (wrongCat) through base class pointer,
base destructor must be virtual (even if no virtual functions in base class)
*/

class WrongAnimal
{
    protected:
        std::string _type;
    
    public:
        // default constructor
        WrongAnimal();
        // personalized constructor
        WrongAnimal(std::string type);
        // copy constructor
        WrongAnimal(const WrongAnimal &og);
        // assignment operator
        WrongAnimal &operator=(const WrongAnimal &og);
        // destructor
        ~WrongAnimal();
        // getters
        const std::string &getType() const;
        // member functions
        void makeSound() const;
};

#endif
