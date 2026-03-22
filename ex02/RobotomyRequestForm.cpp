/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:23:15 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/22 20:47:23 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default Target")
{
    std::cout << GREEN << "RobotomyRequestForm created with target " << this->_target << \
    " with default constructor" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{       
    std::cout << GREEN << "RobotomyRequestForm created with target " << this->_target << \
    " with personalized constructor" << RESET << std::endl;  
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    this->_target = other._target;

    std::cout << GREEN << "RobotomyRequestForm created with target " << this->_target << \
    " with copy constructor" << RESET << std::endl; 
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        this->_target = other._target;
    }

    std::cout << GREEN << "RobotomyRequestForm created with target " << this->_target << \
    " with assignment operator" << RESET << std::endl; 

    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << RED << "RobotomyRequestForm destroyed with destructor" << RESET << std::endl;
}

/*
Must check that the form is signed and that the grade of the bureaucrat attempting to execute the form is high enough. 
Otherwise, throw an appropriate exception.

Makes some drilling noises, then informs that <target> has been robotomized
successfully 50% of the time. Otherwise, it informs that the robotomy failed.
*/
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    // needs to be signed
    if (this->getIsSigned() == false)
        throw FormNotSigned();

    // exec points need to be correct (assigned in constructor)
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
        
    std::cout << "Robotomy Request Form: Drilling noises." << std::endl;

    std::srand(time(NULL)); // use current time as starting value so random numbers are different every run
    int randomNum = std::rand();
    // std::cout << randomNum << std::endl;
    
    if(randomNum % 2)
        std::cout << this->_target << " has been robotomized successfully." << std::endl;
    else
        std::cout << this->_target << "'s robotomy has failed." << std::endl;
}
