/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:51:47 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/25 23:23:36 by pdrettas         ###   ########.fr       */
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
        

    std::cout << "First Name: "; // prints First Name in terminal
    std::getline(std::cin,firstName); // gets whatever is entered next to First Name and saves it in firstName variable
    std::cout << "Last Name: "; 
    std::getline(std::cin,lastName); 
    std::cout << "Nickname: "; 
    std::getline(std::cin,nickname); 
    std::cout << "Phone Number: "; 
    std::getline(std::cin,phoneNumber); 
    std::cout << "Darkest Secret: "; 
    std::getline(std::cin,darkestSecret); 
    
    Contact contact(firstName, lastName, nickname, std::atoi(phoneNumber.c_str()), darkestSecret); // contact saved
    this->_contacts[_numOfAddedContacts] = contact;
    this->_numOfAddedContacts++;
    if (this->_numOfAddedContacts == 8)
    {
        this->_numOfAddedContacts = 0;
    }

    std::cout << "num of contacts " << this->_numOfAddedContacts << std::endl;
    std::cout << "Contact has been successfully added." << std::endl;
}

void PhoneBook::displayContactDetails(Contact contact)
{
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::searchContact()
{
	std::string selectedOption;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   index  |first name|last name | nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	// prints list of all added contacts
    for (int i = 0; i < _numOfAddedContacts; i++) // for loops!
    {
        std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << _contacts[i].getFirstName() << "|" << std::setw(10) << _contacts[i].getLastName() << "|" << std::setw(10) << _contacts[i].getNickname() << "|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl; 
    }
	
	std::cout << "Enter a contact’s index to display their full information." << std::endl;
	std::cout << "Enter anything else to return to the main menu." << std::endl;
	std::getline(std::cin,selectedOption);

    // if contact index selected, the contact is displayed
    if (std::atoi(selectedOption.c_str()) >= 0 && std::atoi(selectedOption.c_str()) < _numOfAddedContacts) 
    {
        displayContactDetails(_contacts[std::atoi(selectedOption.c_str())]);
        std::cout << std::endl;
        std::cout << "Enter 11 to go back to list of contacts." << std::endl;
        std::cout << "Enter anything else to return to the main menu." << std::endl;
        std::getline(std::cin,selectedOption);
        if (selectedOption == "11")
            searchContact();
    }
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook was destroyed successfully." << std::endl;
}
