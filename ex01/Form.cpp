/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:42 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/10 19:47:11 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// TODO: fix later when knowing what to keep and what not bc of grades exceptions
Form::Form() : _name(""), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{}

// TODO: fix later when knowing what to keep and what not bc of isSigned
Form::Form(const std::string name, bool isSigned, const int gradeToSign, const int gradeToExecute) \
        : _name(name), _isSigned(isSigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (!(gradeToSign >= 1 && gradeToExecute >= 1))
        throw GradeTooHighException();
    if (!(gradeToSign <= 150 && gradeToExecute <= 150))
        throw GradeTooLowException();

    std::cout << GREEN << "Form created with name " << this->_name << \
    ", form signed: " << this->_isSigned << ", grade signed: " << this->_gradeToSign << \
    ", grade executed: " << this->_gradeToExecute << RESET << std::endl;
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
    out << LIGHT_GREEN << form.getName() << ": [form is signed: " << form.getIsSigned() \
    << "], [grade to sign: " << form.getGradeToSign() << "], [grade to execute: " \
    << form.getGradeToExecute() << "]" << RESET;

    return out;
}
