/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:52:27 by pdrettas          #+#    #+#             */
/*   Updated: 2026/01/23 18:39:38 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// default constructor
Brain::Brain()
{
    std::cout << GREEN << "[BRAIN] created with default constructor" << RESET << std::endl;
}

// copy constructor
Brain::Brain(const Brain &og)
{
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = og._ideas[i];
    }
    std::cout << GREEN << "[BRAIN] created with copy constructor" << RESET << std::endl;
}

// assignment operator
Brain &Brain::operator=(const Brain &og)
{
    if (this != &og)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = og._ideas[i];
        }
    }
    std::cout << GREEN << "[BRAIN] created with copy assignment operator" << RESET << std::endl;
    return *this;
}

// deconstructor
Brain::~Brain()
{
    std::cout << GREEN << "[BRAIN] destroyed with destructor" << RESET << std::endl;
}
