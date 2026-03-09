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

// int main ()
// {
//     // Test: instantiate a Bureaucrat
//     Bureaucrat("User X", 73);
    
//     // Error Test: instantiate a Bureaucrat with an invalid grade
//     Bureaucrat("User Y", 248);


//     return 0;
// }

// practice
int main ()
{
    try 
    {
        // Test: instantiate a Bureaucrat
        Bureaucrat("User X", 73);
        
        // Error Test: instantiate a Bureaucrat with an invalid grade
        Bureaucrat("User Y", 248);
    }
    catch (std::exception &paula)
    {
        std::cerr << RED << paula.what() << RESET << std::endl; 
    }


    return 0;
}