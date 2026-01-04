/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:12 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/04 20:41:02 by pdrettas         ###   ########.fr       */
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
        // setters
        void setType(std::string type);
        // member functions
        void makeSound() const;
};

#endif
