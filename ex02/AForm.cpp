/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:42 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/22 20:40:26 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

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
    ", form signed: " << this->_isSigned << ", grade needed to sign: " << this->_gradeToSign << \
    ", grade needed to execute: " << this->_gradeToExecute << RESET << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    this->_isSigned = other._isSigned;

    std::cout << GREEN << "AForm created with name " << this->_name << \
    ", form signed: " << this->_isSigned << ", grade needed to sign: " << this->_gradeToSign << \
    ", grade needed to execute: " << this->_gradeToExecute << "with copy constructor" << RESET << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->_isSigned = other._isSigned;
    }

    std::cout << GREEN << "AForm created with name " << this->_name << \
    ", form signed: " << this->_isSigned << ", grade needed to sign: " << this->_gradeToSign << \
    ", grade needed to execute: " << this->_gradeToExecute << "with assignment operator" << RESET << std::endl;
    
    return *this;
}

AForm::~AForm()
{}

const std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getIsSigned() const
{
    return this->_isSigned;
}

const int AForm::getGradeToSign()
{
    return this->_gradeToSign;
}

const int AForm::getGradeToExecute() const
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

const char* AForm::FormNotSigned::what() const noexcept
{
    return ("Error: Form not signed.");
}

const char* AForm::FileNotOpen::what() const noexcept
{
    return ("Error: File cannot be opened.");
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
