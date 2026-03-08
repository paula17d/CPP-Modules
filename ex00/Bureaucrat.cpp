/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:00 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/05 21:26:28 by pdrettas         ###   ########.fr       */
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
    //     if (!(grade >= 1 && grade <= 150))
    //         throw grade;
    // }
    // catch (int invalidGrade)
    // {
    //     if (invalidGrade < 1)
    //         GradeTooHighException();
    //     if (invalidGrade > 150)
    //         GradeTooLowException();
    //     std::cerr << RED << "A grade may only range from 1 to 150. You entered " \
    //         << invalidGrade << "." << RESET << std::endl;
    // }    

    // TODO: implement with exception class
    try
    {
        // do some stuff with bureaucrats // contains code that might fail
    }
    catch (std::exception &e) // catch any exception derived from std::exception
    {
        // handle exception        
    }




    try 
    {
        if (!(grade >= 1 && grade <= 150))
            throw 
    }
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

void Bureaucrat::GradeTooHighException()
{
    // std::cerr << RED << "Error: Grade is too high." << RESET << std::endl;
}

void Bureaucrat::GradeTooLowException()
{
    // std::cerr << RED << "Error: Grade is too low." << RESET << std::endl;
}


