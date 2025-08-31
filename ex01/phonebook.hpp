/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:44:05 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/31 17:37:43 by pauladretta      ###   ########.fr       */
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
        bool isEmpty(std::string input);
};

#endif

// every class is in one file