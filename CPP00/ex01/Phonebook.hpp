/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:44:05 by pauladretta       #+#    #+#             */
/*   Updated: 2025/09/01 22:19:20 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <cctype>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _numOfAddedContacts;
        
    public: 
        // constructor (default)
        PhoneBook();
        // destructor
        ~PhoneBook();
        
        void addContact();
        void searchContact();
        void displayContactDetails(Contact contact);
        bool isValidPhoneNumber(std::string phoneNumber);
        bool isEmpty(std::string input);
        std::string adjustOutputForSearch(std::string input);
};

#endif
