/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:03 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/04 17:46:05 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
};

#endif