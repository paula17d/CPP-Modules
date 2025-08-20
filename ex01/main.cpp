/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 22:46:32 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/17 16:07:42 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main ()
{
    std::string command;
        
    std::cout << "Please type one of the following commands:" << std::endl;
    std::cout << "ADD (save a new contact)" << std::endl;
    std::cout << "SEARCH (display a specific contact)" << std::endl;
    std::cout << "EXIT (quit the program)" << std::endl;
    std::getline(std::cin,command);
    // std::cin >> name ;
    // std::cout << command << std::endl;

    if (command == "ADD")
    {
        // add ft
    }
    if (command == "SEARCH")
    {
        std::cout << "contact xyz." << std::endl;
    }
    if (command == "EXIT")
    {
        std::cout << "program exited." << std::endl;
    }
    
    
    // Contact contactOne;
    // Contact contactTwo("Lukas", "Mueller", "Luke", 1234, "vvv");
    // Contact contactThree("Jon", "Smith", "Johnny", 5678, "yyy");
    // Contact contactFour("Robert", "Schwarz", "Bob", 9012, "zzz");
    // Contact contactFive("Nick", "Mueller", "Nicki", 1234, "aaa");
   
    // std::cout << "name of contactOne = " << contactOne.getFirstName() << std::endl;
    // contactOne.setFirstName("Paula");
    // std::cout << "name of contactOne = " << contactOne.getFirstName() << std::endl;
    // std::cout << "name of contactTwo = " << contactTwo.getFirstName() << std::endl;
    
    // contactTwo.setLastName("Anton");
    // std::cout << "last name of contactTwo new = " << contactTwo.getLastName() << std::endl;

    // contactThree.setNickname("Jonnie");
    // std::cout << "nickname of contactThree new = " << contactThree.getNickname() << std::endl;
    
    // contactFour.setPhoneNumber(9101);
    // std::cout << "phone number of contactFour new = " << contactFour.getPhoneNumber() << std::endl;
    
    // contactFive.setDarkestSecret("sss");
    // std::cout << "darkest secret of contactFive new = " << contactFive.getDarkestSecret() << std::endl;
   
    return (0);
}