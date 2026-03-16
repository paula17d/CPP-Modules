/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:42 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/16 18:31:59 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// TODO: fix later when knowing what to keep and what not bc of grades exceptions
AForm::AForm() : _name(""), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) \
        : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (!(gradeToSign >= 1 && gradeToExecute >= 1))
        throw GradeTooHighException();
    if (!(gradeToSign <= 150 && gradeToExecute <= 150))
        throw GradeTooLowException();

    std::cout << GREEN << "Form created with name " << this->_name << \
    ", form signed: " << this->_isSigned << ", grade signed: " << this->_gradeToSign << \
    ", grade executed: " << this->_gradeToExecute << RESET << std::endl;
}

AForm::~AForm()
{}

std::string AForm::getName()
{
    return this->_name;
}

bool AForm::getIsSigned()
{
    return this->_isSigned;
}

const int AForm::getGradeToSign()
{
    return this->_gradeToSign;
}

const int AForm::getGradeToExecute()
{
    return this->_gradeToExecute;
}

const char* AForm::GradeTooHighException::what() const noexcept
{
    return "Error: Grade is too high. Grades range from 1 to 150.";
}

const char* AForm::GradeTooLowException::what() const noexcept
{
    return "Error: Grade is too low. Grades range from 1 to 150.";
}

/*
changes the form's status to 'signed' if the bureaucrat's grade is high enough
(greater than or equal to the required one)
*/
void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->_gradeToSign) 
        this->_isSigned = true;
    else
        throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, AForm &form)
{
    out << LIGHT_GREEN << form.getName() << ": [form is signed: " << form.getIsSigned() \
    << "], [grade to sign: " << form.getGradeToSign() << "], [grade to execute: " \
    << form.getGradeToExecute() << "]" << RESET;

    return out;
}
