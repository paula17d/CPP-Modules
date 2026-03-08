/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:12 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/05 19:18:55 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    // Test: instantiate a Bureaucrat
    Bureaucrat("User X", 73);
    
    // Error Test: instantiate a Bureaucrat with an invalid grade
    Bureaucrat("User Y", 248);


    return 0;
}