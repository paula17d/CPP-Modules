/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:50:02 by pauladretta       #+#    #+#             */
/*   Updated: 2025/08/17 15:39:18 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

// library for string
#include <iostream> 

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        int _phoneNumber;
        std::string _darkestSecret;
        
    public:
        // constructor
        Contact();
        Contact(std::string firstName, 
                std::string lastName,
                std::string nickname,
                int phoneNumber,
                std::string darkestSecret);
        
        // destructor
        ~Contact();

        // getters
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        int getPhoneNumber();
        std::string getDarkestSecret();
        // setters
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setNickname(std::string nickname);
        void setPhoneNumber(int phoneNumber);
        void setDarkestSecret(std::string darkestSecret);      
};

#endif
