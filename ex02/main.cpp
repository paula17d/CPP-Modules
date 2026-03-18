/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:34:09 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/18 17:04:41 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    Bureaucrat bureaucrat;
    
    // Test 1
    PresidentialPardonForm a;
    // bureaucrat.signForm(a);
    a.execute(bureaucrat);
    
    // Test 2
    RobotomyRequestForm b;
    bureaucrat.signForm(b);
    b.execute(bureaucrat);

    // Test 3
    ShrubberyCreationForm c;
    bureaucrat.signForm(c);
    c.execute(bureaucrat);

    return 0;
}