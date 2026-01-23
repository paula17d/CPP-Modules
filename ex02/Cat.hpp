/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:29 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/23 18:35:45 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *_brain;
    
    public:
        // default constructor
        Cat();
        // copy constructor
        Cat(const Cat &og);
        // assignment operator
        Cat &operator=(const Cat &og);
        // destructor
        ~Cat();
        // member functions
        void makeSound() const;
};

#endif