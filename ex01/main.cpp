/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 22:46:32 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/24 20:08:41 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main ()
{
    PhoneBook phonebook;
    std::string command;
    
    while (true)
    {
        // system("clear"); // deletes terminal (whatever is showing up above)
        std::cout << "Please type one of the following commands:" << std::endl;
        std::cout << "ADD (save a new contact)" << std::endl;
        std::cout << "SEARCH (display a specific contact)" << std::endl;
        std::cout << "EXIT (quit the program)" << std::endl;
        std::getline(std::cin,command);

        if (command == "ADD")
        {
            phonebook.addContact();   
        }   
        else if (command == "SEARCH")
        {
            // std::cout << "contact xyz." << std::endl;
            phonebook.searchContact();
        }
        // else if (command == "EXIT")
        // {
        //     std::cout << "program exited." << std::endl;
        //     // The program quits and the contacts are lost forever!
    }    
    // }
    // else
    // {
    //     // only use FOR (no while)
    //     while (command != "ADD" && command != "SEARCH" && command != "EXIT")
    //     {
    //         std::cout << "Please try again." << std::endl;
    //         std::getline(std::cin,command);
    //     }
    //     // TODO: exits program even tho typing correctly (fix)
    // }
    
    return (0);
}