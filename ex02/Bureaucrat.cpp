/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:00 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/18 17:54:42 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// constructor
Bureaucrat::Bureaucrat() : _name("Default name"), _grade(0)
{}

// personalized constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();

    std::cout << GREEN << "Bureaucrat created with name " << this->_name << \
    " and grade " << this->_grade << RESET << std::endl;
}

// destructor
Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "Bureaucrat destroyed with name " << this->_name << \
    " and grade " << this->_grade << RESET << std::endl;
}

// setters
void Bureaucrat::setGrade(int newGrade)
{
    this->_grade = newGrade;
}

// getters
const std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

// exceptions
const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
    return "Error: Grade is too high. Grades range from 1 to 150.";
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
    return "Error: Grade is too low. Grades range from 1 to 150.";
}

// increment and decrement grade
void Bureaucrat::incrementGrade(int amount)
{
    this->_grade -= amount;

    if (this->_grade < 1)
        throw GradeTooHighException();

    std::cout << BLUE << "Grade has been incremented by " << amount \
    << ". New grade: " << this->_grade << RESET << std::endl;
}

void Bureaucrat::decrementGrade(int amount)
{
    this->_grade += amount;

    if (this->_grade > 150)
        throw GradeTooLowException();

    std::cout << BLUE << "Grade has been decremented by " << amount \
    << ". New grade: " << this->_grade << RESET << std::endl;
}

// calls the beSigned ft to attempt to sign the AForm (prints something wether or not AForm is signed successfully)
void Bureaucrat::signForm(AForm &form) // TODO: finish this function (last big paragraph in subject)
{
    //isSigned is true?
    // <bureaucrat> signed <form>
    try
    {
        form.beSigned(*this);
    
        std::cout << "Bureaucrat " << this->_name << " signed " << \
        form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        // <bureaucrat> couldn’t sign <form> because <reason>
        std::cerr << "Bureaucrat " << this->_name << " couldn't sign " << \
        form.getName() << " because " << e.what() << std::endl;
    }
}

/*
It must attempt to execute the form. 
If successful, print something like: <bureaucrat> executed <form>
If not, print an explicit error message.
*/
void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

// overload operator
std::ostream& operator<<(std::ostream& out, Bureaucrat &user)
{
    out << LIGHT_GREEN << user.getName() << ", bureaucrat grade " \
    << user.getGrade() << "." << RESET;
    
    return out;
}