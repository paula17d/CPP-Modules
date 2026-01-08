/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:52:29 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/08 13:50:27 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class Brain
{
    private:
        std::string _ideas[100];
    
    public:
        // default constructor
        Brain();
        // copy constructor
        Brain(const Brain &og);
        // assignment operator
        Brain &operator=(const Brain &og);
        // destructor
        ~Brain();
};

#endif