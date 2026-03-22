/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:23:20 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/22 19:22:16 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default Target")
{
    std::cout << GREEN << "PresidentialPardonForm created with target " << this->_target << \
    " with default constructor" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{       
    std::cout << GREEN << "PresidentialPardonForm created with target " << this->_target << \
    " with personalized constructor" << RESET << std::endl;  
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    this->_target = other._target;

    std::cout << GREEN << "PresidentialPardonForm created with target " << this->_target << \
    " with copy constructor" << RESET << std::endl; 
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        this->_target = other._target;
    }

    std::cout << GREEN << "PresidentialPardonForm created with target " << this->_target << \
    " with assignment operator" << RESET << std::endl; 

    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << RED << "PresidentialPardonForm destroyed with destructor" << RESET << std::endl;
}

/*
Must check that the form is signed and that the grade of the bureaucrat attempting to execute the form is high enough. 
Otherwise, throw an appropriate exception.

Informs that <target> has been pardoned by Zaphod Beeblebrox.
*/
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    // needs to be signed
    if (this->getIsSigned() == false)
        throw FormNotSigned();

    // exec points need to be correct (assigned in constructor)
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}