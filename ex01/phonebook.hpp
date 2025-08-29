/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:44:05 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/30 01:20:29 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>
#include <cctype>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _numOfAddedContacts; // here bc also used in other functions
        int _position; // here bc also used in other functions
        
    public: 
        // constructor (default & optional: personalized)
        PhoneBook();
        // destructor
        ~PhoneBook();
        
        // setter
        void addContact();
        void searchContact();
        void displayContactDetails(Contact contact);
        bool isValidPhoneNumber(std::string phoneNumber);
};

#endif

// every class is in one file