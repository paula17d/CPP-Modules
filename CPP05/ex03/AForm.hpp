/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:35 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/23 00:27:22 by pdrettas         ###   ########.fr       */
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
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        virtual ~AForm();
        const std::string getName() const;
        bool getIsSigned() const;
        const int getGradeToSign();
        const int getGradeToExecute() const;

        class GradeTooHighException : public std::exception
        {
            const char* what() const noexcept;
        };
        class GradeTooLowException : public std::exception
        {
            const char* what() const noexcept;
        };
        class FormNotSigned : public std::exception
        {
            const char* what() const noexcept;
        };
        class FileNotOpen : public std::exception
        {
            const char* what() const noexcept;
        };
        
        void beSigned(Bureaucrat &b);
        virtual void execute(Bureaucrat const & executor) const = 0; // pure virtual ft making the class abstract
};

std::ostream& operator<<(std::ostream &out, AForm &form);

#endif