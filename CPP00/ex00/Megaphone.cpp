/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 22:29:23 by pdrettas          #+#    #+#             */
/*   Updated: 2025/09/01 22:29:31 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <algorithm>

int main (int argc, char **argv)
{    
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string line = argv[i];
            std::transform(line.begin(), line.end(), line.begin(), ::toupper);
            std::cout << line ;
        }
    }
    std::cout << std::endl;

    return (0);
}
