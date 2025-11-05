/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:24:54 by pdrettas          #+#    #+#             */
/*   Updated: 2025/11/05 20:24:19 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my "
            << "7XL-double-cheese-triple-pickle-specialketchup burger. " 
            << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money."
            << "You didn’t put enough bacon in my burger! "
            << "If you did, I wouldn’t be asking for more!" << std::endl;    
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. " 
            << "I’ve been coming for years, " 
            << "whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/*
1. Declaring a pointer to member functions in an array
2. Call functions via pointer 
*/
void Harl::complain(std::string level) // level = warning
{
    void(Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; // pointer in the class Harl points to debug ft in Harl
    std::string input_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    while (i < 4 && level != input_level[i])
        i++;
    
    (this->*ptr[i])();
}

void Harl::complain_filter(std::string level)
{
    std::string input_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    while (i < 4 && level != input_level[i]) // TODO:possibly remove this or in ft above bc double (check how)
        i++;
        
    switch (i)
    {
        case (0):
            std::cout << "[ DEBUG ]" << std::endl;
            this->complain("DEBUG");
            std::cout << std::endl;
        case (1):
            std::cout << "[ INFO ]" << std::endl;
            this->complain("INFO");
            std::cout << std::endl;
        case (2):
            std::cout << "[ WARNING ]" << std::endl;
            this->complain("WARNING");
            std::cout << std::endl;
        case (3):
            std::cout << "[ ERROR ]" << std::endl;
            this->complain("ERROR");
            std::cout << std::endl;
            break;
        default:
            break;
    }   
}
