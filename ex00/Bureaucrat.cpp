/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:00 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/04 17:49:30 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// constructor
Bureaucrat::Bureaucrat() : _grade(0)
{}

// personalized constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    // TODO (1): add here that grade can only be between 1-150 (exceptions)
    // TODO: fix this entire function bc wrong / learn about exceptions / check subjects
    try
    {
        if (!(grade >= 1 && grade <= 150))
            throw grade;
    }
    catch (int invalidGrade)
    {
        if ()
        
        std::cerr << "Grade " << std::endl;
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
    
}

void Bureaucrat::GradeTooLowException()
{
    
}
