/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:34:09 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/22 21:56:28 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    try
    {
        // Test 0 (ex. to throw an exception: change grade to an invalid one)
        std::cout << ORANGE << "********* TEST 0: BUREAUCRAT WITH VALID GRADE ************************************************************************" << RESET << std::endl;
        Bureaucrat bureaucrat("Val", 1);
        
        // Test 1 (ex. to throw an exception: comment signForm ft call below, causing the requirement of the form to be signed not being fulfilled)
        std::cout << ORANGE << "********* TEST 1: [PRESIDENTIAL] FORM CREATION & ABILITY TO SIGN AND EXECUTE FORM BY BUREAUCRAT **********************" << RESET << std::endl;
        PresidentialPardonForm a;
        bureaucrat.signForm(a);
        bureaucrat.executeForm(a);
        
        // Test 2 (ex. to throw an exception: change the bureaucrat's grade to be lower (higher) than what is required given in default constructor)
        std::cout << ORANGE << "********* TEST 2: [ROBOTOMY] FORM CREATION & ABILITY TO SIGN AND EXECUTE FORM BY BUREAUCRAT **************************" << RESET << std::endl;
        RobotomyRequestForm b;
        bureaucrat.signForm(b);
        bureaucrat.executeForm(b);

        // Test 3 (check if file "target"_shrubbery was created)
        std::cout << ORANGE << "********* TEST 3: [SHRUBBERY] FORM CREATION & ABILITY TO SIGN AND EXECUTE FORM BY BUREAUCRAT *************************" << RESET << std::endl;
        ShrubberyCreationForm c("home");
        bureaucrat.signForm(c);
        bureaucrat.executeForm(c);  
    }

    catch (std::exception &e)
    {
        std::cerr << ORANGE << e.what() << RESET << std::endl;
    }

    return 0;
}