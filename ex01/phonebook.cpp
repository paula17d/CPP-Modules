/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:51:47 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/31 19:21:52 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// implementation of constructor 
PhoneBook::PhoneBook()
{
    _numOfAddedContacts = 0;
    // std::cout << "PhoneBook has been created." << std::endl;  
}

// helper ft for addContact
bool PhoneBook::isValidPhoneNumber(std::string phoneNumber)
{
    for (char c : phoneNumber) // range-based for loop (goes through each character in specified string)
    {
        if (!std::isdigit(c))
            return false;
    }
    return true;
}

bool PhoneBook::isEmpty(std::string input)
{
    if (input.empty())
        return true;
        
    for (char c : input)
    {
        if (!(c == ' '  || c == '\t' || c == '\n' ||
            c == '\v' || c == '\f' || c == '\r'))
            return false;
    }
    return true;
}

void PhoneBook::addContact()
{   
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
        
    // gets whatever is entered next to First Name and saves it in firstName variable
    while (this->isEmpty(firstName))
    {
        std::cout << "First Name: ";
        std::getline(std::cin,firstName);
        if (std::cin.eof()) // ctrl + D check
            return ;
    }
    while (this->isEmpty(lastName))
    {
        std::cout << "Last Name: ";
        std::getline(std::cin,lastName);
        if (std::cin.eof()) // ctrl + D check
            return ;
    }
    while (this->isEmpty(nickname))
    { 
        std::cout << "Nickname: "; 
        std::getline(std::cin,nickname); 
        if (std::cin.eof()) // ctrl + D check
            return ;
    }
    while (this->isEmpty(phoneNumber)) 
    { 
        std::cout << "Phone Number: "; 
        std::getline(std::cin,phoneNumber);
        while (!isValidPhoneNumber(phoneNumber)) // parse phone number ft
        {
            std::cout << "***ERROR*** Invalid phone number. Must contain digits only. Please try again." << std::endl;
            std::cout << "Phone Number: ";
            std::getline(std::cin,phoneNumber);
        }
        if (std::cin.eof()) // ctrl + D check
            return ;
    }
    while (this->isEmpty(darkestSecret))
    { 
        std::cout << "Darkest Secret: "; 
        std::getline(std::cin,darkestSecret); 
        if (std::cin.eof()) // ctrl + D check
            return ;
    }
    
    // ensures index always stays between 0–7. 
    // % gives the remainder after division, so contact 8 % 8 = 0, 9 % 8 = 1, etc. (bc 9th contact has to replace 1st)
    // _position = _numOfAddedContacts % 8; // new
    Contact contact(firstName, lastName, nickname, phoneNumber, darkestSecret); // contact saved
    this->_contacts[_numOfAddedContacts % 8] = contact; // new
    this->_numOfAddedContacts++;
}

// helper ft for searchContact
void PhoneBook::displayContactDetails(Contact contact)
{
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

// if input more than 10 characters, replace 10th with . 
std::string PhoneBook::adjustOutputForSearch(std::string input)
{
    std::string adjustedOutput;
    
    adjustedOutput = input;
    if (input.length() > 10)
    {
       adjustedOutput = adjustedOutput.substr(0, 9);
       adjustedOutput = adjustedOutput + ".";
    }
    return adjustedOutput;  
}

void PhoneBook::searchContact()
{
	std::string selectedOption;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   index  |first name|last name | nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	// prints list of all added contacts
    int updatedNumOfAddedContacts = _numOfAddedContacts; // new
    if (_numOfAddedContacts > 8)
        updatedNumOfAddedContacts = 8;
    for (int i = 0; i < updatedNumOfAddedContacts; i++) // new
    {
        std::cout << "|" << std::setw(10) << i
          << "|" << std::setw(10) << this->adjustOutputForSearch(_contacts[i].getFirstName())
          << "|" << std::setw(10) << this->adjustOutputForSearch(_contacts[i].getLastName())
          << "|" << std::setw(10) << this->adjustOutputForSearch(_contacts[i].getNickname())
          << "|" << std::endl;
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
    // std::cout << "PhoneBook was destroyed successfully." << std::endl;
}
