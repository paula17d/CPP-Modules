/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:44:05 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/17 15:38:53 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        
    public: 
        // constructor
        PhoneBook();
        // destructor
        ~PhoneBook();
        
        void addContact();

};

#endif

// every class is in one file