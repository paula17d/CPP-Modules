

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
    private:
        const std::string _name;
        bool _isSigned; // at construction, it is not signed
        const int _gradeToSign; // required to sign it
        const int _gradeToExecute; // required to execute it

    public:
        Form();
        Form(const std::string name, bool isSigned, const int gradeToSign, \
            const int gradeToExecute);
        ~Form();
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

};

std::ostream& operator<<(std::ostream &out, Form &form);

#endif