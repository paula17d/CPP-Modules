/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:57:12 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/21 17:58:45 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

/*
abstract class: a class with at least one pure virtual 
function becomes an abstract class. 
*/

class AAnimal
{
    protected:
        std::string _type;
    
    public:
        // default constructor
        AAnimal();
        // personalized constructor
        AAnimal(std::string type);
        // copy constructor
        AAnimal(const AAnimal &og);
        // assignment operator
        AAnimal &operator=(const AAnimal &og);
        // destructor
        virtual ~AAnimal();
        // getters
        const std::string &getType() const;
        // member functions
        virtual void makeSound() const = 0; // pure virtual
};

#endif
