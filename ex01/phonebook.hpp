/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:44:05 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/22 20:59:55 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact _contact[8];
        int _numOfAddedContacts;
        
    public: 
        // constructor (default & optional: personalized)
        PhoneBook();
        // destructor
        ~PhoneBook();
        
        // setter
        void addContact();

};

#endif

// every class is in one file