/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 22:46:32 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/17 02:05:02 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main ()
{
    Contact contactOne;
    Contact contactTwo("Lukas", "Mueller", "Luke", 1234, "vvv");
    Contact contactThree("Jon", "Smith", "Johnny", 5678, "yyy");
    Contact contactFour("Robert", "Schwarz", "Bob", 9012, "zzz");
    Contact contactFive("Nick", "Mueller", "Nicki", 1234, "aaa");
   
    std::cout << "name of contactOne = " << contactOne.getFirstName() << std::endl;
    contactOne.setFirstName("Paula");
    std::cout << "name of contactOne = " << contactOne.getFirstName() << std::endl;
    std::cout << "name of contactTwo = " << contactTwo.getFirstName() << std::endl;
    
    contactTwo.setLastName("Anton");
    std::cout << "last name of contactTwo new = " << contactTwo.getLastName() << std::endl;

    contactThree.setNickname("Jonnie");
    std::cout << "nickname of contactThree new = " << contactThree.getNickname() << std::endl;
    
    contactFour.setPhoneNumber(9101);
    std::cout << "phone number of contactFour new = " << contactFour.getPhoneNumber() << std::endl;
    
    contactFive.setDarkestSecret("sss");
    std::cout << "darkest secret of contactFive new = " << contactFive.getDarkestSecret() << std::endl;
   
    return (0);
}