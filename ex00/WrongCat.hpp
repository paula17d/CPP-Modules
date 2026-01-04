/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:29 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/04 20:37:22 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:
        std::string _type;
    
    public:
        // default constructor
        WrongCat();
        // personalized constructor
        WrongCat(std::string type);
        // copy constructor
        WrongCat(const WrongCat &og);
        // assignment operator
        WrongCat &operator=(const WrongCat &og);
        // destructor
        ~WrongCat();
        // getters
        const std::string &getType() const;
        // setters
        void setType(std::string type);
        // member functions
        void makeSound() const;
};

#endif