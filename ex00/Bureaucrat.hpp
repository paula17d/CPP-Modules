/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:03 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/08 14:39:19 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#define RED "\033[31m"
#define RESET "\033[0m"

class Bureaucrat
{
    private:
        const std::string _name; // name of bureaucrat
        int _grade;  // a grade that ranges from 1 (highest possible grade) to 150 (lowest possible grade)
        
    public:
        Bureaucrat(); // constructor
        Bureaucrat(std::string name, int grade); // personalized constructor
        ~Bureaucrat(); // destructor
        // setters
        void setGrade(int newGrade);
        // getters
        const std::string getName();
        int getGrade();
        // other functions
        void GradeTooHighException();
        void GradeTooLowException();
        // FT: increment grade
        // FT: decrement grade
};

// a class to represent an error
class Exception : public std::exception // needs to inherit from std::exception for common interface
{
    public:
        const char* what() const noexcept; // standard way to read a message
};

#endif