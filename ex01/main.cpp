/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:48 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/16 18:02:31 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        // Test: creating a form (change grade outside of 1-150 for error)
        // Form z("User Z", 10, 1);
        
        // Test: printing a form with overloading operator
        // std::cout << z << std::endl;

        // Test: change form's status to signed if bureaucrat's grade is high enough (greater or equal to required one)
        // Bureaucrat paul("Paul", 9);
        // std::cout << paul << std::endl; // TODO: can this go automatically to this instead of having to type new name & age??
        // Form a("User Z", 10, 1);
        // a.beSigned(paul);

        // Test: change form's status to signed if bureaucrat's grade is high enough (greater or equal to required one)
        Bureaucrat marie("Marie", 11);
        Form z("Bureaucrat Form", 10, 11);
        // TODO: finish signForm ft in Bureacraut.cpp
        marie.signForm(z);
        
    }
    catch (std::exception &e)
    {
        // Error Test: catching the thrown exception if form has too low/high of a grade
        std::cerr << ORANGE << e.what() << RESET << std::endl;
    }

    
    return 0;
}
