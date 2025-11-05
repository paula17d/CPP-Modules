/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:28:16 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/05 11:53:26 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
Harl also has a public member function that calls the four member functions above
depending on the level passed as a parameter:

The goal of this exercise is to use pointers to member functions. This is not a
suggestion. Harl has to complain without using a forest of if/else if/else. 
He doesn’t think twice!

Levels:
DEBUG
INFO
WARNING
ERROR
*/
int main ()
{
    Harl harl;
    
    harl.complain("DEBUG");

    return 0;
}