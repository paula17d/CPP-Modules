/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:51:47 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/22 21:10:40 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// implementation of constructor 
PhoneBook::PhoneBook()
{
    _numOfAddedContacts = 0;
    
    
    std::cout << "PhoneBook has been created." << std::endl;  
}

void PhoneBook::addContact()
{   
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
        

    std::cout << "First Name: "; 
    std::getline(std::cin,firstName); 
    std::cout << "Last Name: "; 
    std::getline(std::cin,lastName); 
    std::cout << "Nickname: "; 
    std::getline(std::cin,nickname); 
    std::cout << "Phone Number: "; 
    std::getline(std::cin,phoneNumber); 
    std::cout << "Darkest Secret: "; 
    std::getline(std::cin,darkestSecret); 
    
    Contact contact(firstName, lastName, nickname, std::atoi(phoneNumber.c_str()), darkestSecret);
    this->_contact[_numOfAddedContacts] = contact;
    this->_numOfAddedContacts++;
    if (this->_numOfAddedContacts == 8)
    {
        this->_numOfAddedContacts = 0;
    }

    std::cout << "num of contacts " << this->_numOfAddedContacts << std::endl;
    std::cout << "Contact has been successfully added." << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook was destroyed successfully." << std::endl;
}
