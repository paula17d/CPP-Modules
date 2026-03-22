/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:42 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/22 21:29:07 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) \
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

Form::Form(const Form &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    this->_isSigned = other._isSigned;

    std::cout << GREEN << "Form created with name " << this->_name << \
    ", form signed: " << this->_isSigned << ", grade needed to sign: " << this->_gradeToSign << \
    ", grade needed to execute: " << this->_gradeToExecute << "with copy constructor" << RESET << std::endl;
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->_isSigned = other._isSigned;
    }

    std::cout << GREEN << "Form created with name " << this->_name << \
    ", form signed: " << this->_isSigned << ", grade needed to sign: " << this->_gradeToSign << \
    ", grade needed to execute: " << this->_gradeToExecute << "with assignment operator" << RESET << std::endl;
    
    return *this;
}
        
Form::~Form()
{}

std::string Form::getName()
{
    return this->_name;
}

bool Form::getIsSigned()
{
    return this->_isSigned;
}

const int Form::getGradeToSign()
{
    return this->_gradeToSign;
}

const int Form::getGradeToExecute()
{
    return this->_gradeToExecute;
}

const char* Form::GradeTooHighException::what() const noexcept
{
    return "Error: Grade is too high. Grades range from 1 to 150.";
}

const char* Form::GradeTooLowException::what() const noexcept
{
    return "Error: Grade is too low. Grades range from 1 to 150.";
}

/*
changes the form's status to 'signed' if the bureaucrat's grade is high enough
(greater than or equal to the required one)
*/
void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->_gradeToSign) 
        this->_isSigned = true;
    else
        throw Form::GradeTooLowException();
        
    // std::cout << "Form of " << b.getName() << \
    // " has successfully been signed -> Bureaucrat's grade is high enough." << \
    // " Grade needed to sign: " << this->_gradeToSign << ". Bureaucrat's grade: " << \
    // b.getGrade() << std::endl;
}

std::ostream& operator<<(std::ostream &out, Form &form)
{
    out << "Form " << form.getName() << ": [form is signed: " << form.getIsSigned() \
    << "], [grade needed to sign: " << form.getGradeToSign() << "], [grade needed to execute: " \
    << form.getGradeToExecute() << "]";

    return out;
}
