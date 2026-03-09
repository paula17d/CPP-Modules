/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:12 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/08 22:16:17 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try 
    {
        /* do some stuff with bureaucrats */
        // Test: instaniating a bureaucrat
        Bureaucrat x("User X", 3);

        // Error Test: instaniating a bureaucrat (grade out of range)
        // Bureaucrat y("User Y", 528);

        // Test: incrementing and decrementing a grade
        x.incrementGrade(1);
        x.decrementGrade(22);

        // Error Test: incrementing grade (grade out of range)
        // x.incrementGrade(1000);

        // Test: overload of the insertion (<<) operator to "<name>, bureaucrat grade <grade>"
        std::cout << x << std::endl;
    }
    catch (std::exception &e)
    {
        /* handle exception */
        std::cerr << ORANGE << e.what() << RESET << std::endl;
    }

    return 0;
}