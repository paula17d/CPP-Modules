/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:34:09 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/18 18:05:27 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// note: catches exception for Bureaucrat with invalid grade
int main ()
{
    try
    {
        // Test 0 (valid grade)
        Bureaucrat bureaucrat("One", 1);
        
        // Test 1
        PresidentialPardonForm a;
        bureaucrat.signForm(a);
        bureaucrat.executeForm(a);
        
        // Test 2
        RobotomyRequestForm b;
        bureaucrat.signForm(b);
        bureaucrat.executeForm(b);

        // Test 3
        ShrubberyCreationForm c;
        bureaucrat.signForm(c);
        bureaucrat.executeForm(c);  
    }

    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}