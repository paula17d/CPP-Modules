/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 22:46:32 by pauladretta       #+#    #+#             */
/*   Updated: 2025/09/01 22:20:40 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main ()
{
    PhoneBook phonebook;
    std::string command;
    
    while (true)
    {
        system("clear"); // clears terminal
        std::cout << "Please type one of the following commands:" << std::endl;
        std::cout << "  ADD (save a new contact)" << std::endl;
        std::cout << "  SEARCH (display a specific contact)" << std::endl;
        std::cout << "  EXIT (quit the program)" << std::endl;
        std::getline(std::cin,command);

        if (command == "ADD")
            phonebook.addContact();   
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
        {
            system("clear");
            return 0;
        }
        
        // Without checking std::cin.eof(), pressing Ctrl+D causes std::getline to fail and the input stream enters an EOF state,
        // so none of the above conditions match, so loop appears stuck. 
        // Adding the check detects EOF immediately, allowing the program to exit gracefully.
        if (std::cin.eof())
        {
            system("clear");
            return 0;   
        }
    }    
    return 0;
}
