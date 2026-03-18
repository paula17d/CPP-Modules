/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:23:10 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/18 17:02:39 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
    std::cout << GREEN << "ShrubberyCreationForm created with default constructor" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{       
    std::cout << GREEN << "ShrubberyCreationForm created with personalized constructor" << RESET << std::endl;  
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << RED << "ShrubberyCreationForm destroyed" << RESET << std::endl;
}

/*
Must check that the form is signed and that the grade of the bureaucrat attempting to execute the form is high enough. 
Otherwise, throw an appropriate exception.

Creates a file <target>_shrubbery in the working directory and writes ASCII trees inside it.
*/
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    // needs to be signed
    if (this->getIsSigned() == false)
        throw FormNotSigned();

    // exec points need to be correct (assigned in constructor)
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();

    
    std::ofstream file(this->_target + "_shrubbery");
    if (file.is_open())
    {
        file << "       *       " << std::endl;
        file << "      ***      " << std::endl;
        file << "     *****     " << std::endl;
        file << "    *******    " << std::endl;
        file << "   *********   " << std::endl;
        file << "      |||      " << std::endl;
        file << "      |||      " << std::endl;
    } 
    else
        throw FileNotOpen();
    file.close();
}