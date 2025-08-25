/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 22:46:32 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/25 23:36:32 by pdrettas         ###   ########.fr       */
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
        system("clear"); // deletes terminal (whatever is showing up above)
        std::cout << "Please type one of the following commands:" << std::endl;
        std::cout << "ADD (save a new contact)" << std::endl;
        std::cout << "SEARCH (display a specific contact)" << std::endl;
        std::cout << "EXIT (quit the program)" << std::endl;
        std::getline(std::cin,command);

        if (command == "ADD")
            phonebook.addContact();   
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
        {
            system("clear");
            return (0);
        }
    }    
    return (0);
}

// TODO: parse phone number
// TODO: ctrl D means exit has to happen (no infinite loop should occur)
// TODO: delete stuff like "contact with name was destroyed successfully" AT END that is printed