/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:03 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/16 19:00:52 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <stdexcept>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_GREEN "\033[38;5;120m"
#define RESET "\033[0m"

// TODO: add copy constructor & operator= in each exercise and class

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
        // other functions
        void incrementGrade(int amount);
        void decrementGrade(int amount);
    };
    
// overload operator
std::ostream& operator<<(std::ostream& out, Bureaucrat &user);

#endif