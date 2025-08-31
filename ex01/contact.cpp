/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:54:51 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/31 19:21:47 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// implementation of constructor (constructor per default)
Contact::Contact()
{
    // this->_firstName = "First Name";
    // this->_lastName = "Last Name";
    // this->_nickname = "nickname";
    // this->_phoneNumber = 0;
    // this->_darkestSecret = "xxx";
    // std::cout << "contact with name "<< this->_firstName << " " << this->_lastName << \
    // ", nickname " << this->_nickname << ", phone number " << this->_phoneNumber << \
    // ", and darkest secret being '" << this->_darkestSecret << \
    // "' was created successfully with the default constructor." << std::endl;
    // std::cout << "empty contact has been created " << std::endl; // comment for eval to test if contacts are empty when executing phonebook
}

Contact::Contact(std::string firstName, 
                std::string lastName,
                std::string nickname,
                std::string phoneNumber,
                std::string darkestSecret)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_nickname = nickname;
    this->_phoneNumber = phoneNumber;
    this->_darkestSecret = darkestSecret;
//     std::cout << "contact with name "<< this->_firstName << " " << this->_lastName << \
//     ", and nickname " << this->_nickname << ", phone number " << this->_phoneNumber << \
//     ", and darkest secret being '" << this->_darkestSecret << \
//     "' was created successfully with the personalized constructor." << std::endl;  
}

void Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

std::string Contact::getFirstName()
{
    return this->_firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

std::string Contact::getLastName()
{
    return this->_lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

std::string Contact::getNickname()
{
    return this->_nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

std::string Contact::getPhoneNumber()
{
    return this->_phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret()
{
    return this->_darkestSecret;
}

Contact::~Contact()
{
    // std::cout << "contact with name "<< this->_firstName << " was destroyed successfully." << std::endl;
}
