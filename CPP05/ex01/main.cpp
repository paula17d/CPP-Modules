/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:48 by pdrettas          #+#    #+#             */
/*   Updated: 2026/03/22 21:39:54 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        // Test 0 (enter required grades for bureaucrat needed to at least sign / execute the form later)
        std::cout << ORANGE << "********* TEST 0: BASIC FORM CREATION & DISPLAY OF FORM *****************************************************************" << RESET << std::endl;
        Form z("Exam02", 100, 100);
        std::cout << z << std::endl;

        // Test 1 (ex. to throw an exception: change the bureaucrat's grade to be lower (higher) than what is required in form above)
        std::cout << ORANGE << "********* TEST 1: SIGNFORM FUNCTIONALITY WITH REQUIRED GRADES ***********************************************************" << RESET << std::endl;
        Bureaucrat marie("Marie", 99);
        marie.signForm(z);
    }
    catch (std::exception &e)
    {
        std::cerr << ORANGE << e.what() << RESET << std::endl;
    }
    
    return 0;
}
