/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:34:09 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/23 00:54:57 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main ()
{
    // Test 0 (ex. to throw an exception: enter non-existing form)
    std::cout << ORANGE << "********* TEST 0: CREATION OF NEW FORM BY INTERN ****************************************************************" << RESET << std::endl;
    Intern someRandomIntern;
    AForm *rrf;

    rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
    delete rrf;
    
    return 0;
}