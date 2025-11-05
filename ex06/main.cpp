/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:28:16 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/05 20:21:49 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
Harl also has a public member function that calls the four member functions above
depending on the level passed as a parameter:

The goal of this exercise is to use pointers to member functions. This is not a
suggestion. Harl has to complain without using a forest of if/else if/else. 
He doesn’t think twice!

Test by writing one of the four parameters.
*/
int main (int argc, char **argv)
{
    Harl harl;
 
    if (argc != 2)
        return 1;
        
    harl.complain_filter(argv[1]);

    return 0;
}