/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:35 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/16 18:30:22 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
// #include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned; // at construction, it is not signed
        const int _gradeToSign; // required to sign it
        const int _gradeToExecute; // required to execute it

    public:
        AForm();
        AForm(const std::string name, const int gradeToSign, \
            const int gradeToExecute);
        ~AForm();
        std::string getName();
        bool getIsSigned();
        const int getGradeToSign();
        const int getGradeToExecute();

        class GradeTooHighException : public std::exception
        {
            const char* what() const noexcept;
        };
        class GradeTooLowException : public std::exception
        {
            const char* what() const noexcept;
        };
        
        void beSigned(Bureaucrat &b);
};

std::ostream& operator<<(std::ostream &out, AForm &form);

#endif