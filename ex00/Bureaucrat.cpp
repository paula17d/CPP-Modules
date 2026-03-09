/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:00 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/08 22:21:57 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// constructor
Bureaucrat::Bureaucrat() : _grade(0)
{}

// personalized constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    // try
    // {
        // do some stuff with bureaucrats // contains code that might fail
        if (grade < 1)
            throw GradeTooHighException();
        if (grade > 150)
            throw GradeTooLowException();
        std::cout << "try laift noch " << std::endl;
    // }
    // catch (std::exception &e) // catch any exception derived from std::exception
    // {
    //     // handle exception
    //     std::cerr << RED << e.what() << RESET << std::endl;        
    // }
    // TODO: move name and grade initializing here (not in declaraiont)
    std::cout << "Bureaucrat created with name " << this->_name << \
    " and grade " << this->_grade << std::endl;
}

// destructor
Bureaucrat::~Bureaucrat()
{}

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

int Bureaucrat::getGrade()
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
