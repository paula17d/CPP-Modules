/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:29 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/04 20:18:03 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : virtual public Animal
{
    protected:
        std::string _type;
    
    public:
        // default constructor
        Cat();
        // personalized constructor
        Cat(std::string type);
        // copy constructor
        Cat(const Cat &og);
        // assignment operator
        Cat &operator=(const Cat &og);
        // destructor
        ~Cat();
        // getters
        const std::string &getType() const;
        // setters
        void setType(std::string type);
        // member functions
        void makeSound() const;
};

#endif