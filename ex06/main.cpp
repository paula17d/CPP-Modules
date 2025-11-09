/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:28:16 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/09 20:47:39 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
    Harl harl;
 
    if (argc != 2)
        return 1;
        
    harl.complain_filter(argv[1]);

    return 0;
}