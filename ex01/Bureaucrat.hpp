/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:03 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/22 20:55:00 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <stdexcept>
#include "Form.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_GREEN "\033[38;5;120m"
#define RESET "\033[0m"

class Bureaucrat
{
    private:
        const std::string _name; // name of bureaucrat
        int _grade;  // a grade that ranges from 1 (highest possible grade) to 150 (lowest possible grade)
        
    public:
        // constructor
        Bureaucrat(); 
        // personalized constructor
        Bureaucrat(std::string name, int grade);
        // copy constructor
        Bureaucrat(const Bureaucrat &other);
        // assignment operator
        Bureaucrat &operator=(const Bureaucrat &other);
        // destructor
        ~Bureaucrat(); 
        // setters
        void setGrade(int newGrade);
        // getters
        const std::string getName();
        int getGrade();
        // exceptions (a class to represent an error)
        class GradeTooHighException : public std::exception 
        {
            public:
                const char* what() const noexcept;
        };
        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const noexcept;
        };
        // member functions
        void incrementGrade(int amount);
        void decrementGrade(int amount);
        void signForm(Form &form);
    };
    
// overload operator
std::ostream& operator<<(std::ostream& out, Bureaucrat &user);

#endif