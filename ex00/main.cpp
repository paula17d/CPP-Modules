/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:12 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/22 22:02:37 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try 
    {
        // Test 0 (ex. to throw an exception: change the bureaucrat's grade out of its range 1-150)
        std::cout << ORANGE << "********* TEST 0: INSTANTIATION OF A BUREAUCRAT WITH A VALID GRADE **********************" << RESET << std::endl;
        Bureaucrat x("Marie", 3);

        // Test 1 (ex. to throw an exception: increment/decrement a grade out of range)
        std::cout << ORANGE << "********* TEST 1: INCREMENTATION/DECREMENTATION OF BUREAUCRAT'S GRADE *******************" << RESET << std::endl;
        x.incrementGrade(1);
        x.decrementGrade(22);

        // Test 2
        std::cout << ORANGE << "********* TEST 2: DISPLAY INFO OF BUREAUCRAT ********************************************" << RESET << std::endl;
        std::cout << x << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << ORANGE << e.what() << RESET << std::endl;
    }

    return 0;
}