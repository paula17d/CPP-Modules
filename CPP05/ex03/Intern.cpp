/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 22:06:04 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/23 00:50:19 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// constructor
Intern::Intern()
{
    std::cout << GREEN << "Intern created with default constructor" << RESET << std::endl;
}

// copy constructor
Intern::Intern(const Intern &other)
{
    std::cout << GREEN << "Intern created with copy constructor" << RESET << std::endl;
}

// copy assignment operator
Intern &Intern::operator=(const Intern &other)
{
    if (this != &other)
    {}
    
    std::cout << GREEN << "Intern created with copy assignment operator" << RESET << std::endl;
    
    return *this;
}

// destructor
Intern::~Intern()
{
    std::cout << RED << "Intern destroyed with destructor" << RESET << std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string createForm[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
    
    int i = 0;
    while (i < 3)
    {
        if (formName == createForm[i])
            break;
        i++;
    }

    switch(i)
    {
        case 0:
            std::cout << "Intern creates " << formName << "Form" << std::endl;
            return new PresidentialPardonForm(formTarget);

        case 1:
            std::cout << "Intern creates " << formName << "Form" << std::endl;
            return new RobotomyRequestForm(formTarget);
            
        case 2:
            std::cout << "Intern creates " << formName << "Form" << std::endl;
            return new ShrubberyCreationForm(formTarget);
    }
    
    std::cerr << ORANGE << "Error: Entered form not found." << RESET << std::endl;
    return nullptr;
}