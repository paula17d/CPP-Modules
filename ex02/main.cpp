/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:52:52 by pdrettas          #+#    #+#             */
/*   Updated: 2025/10/25 22:37:42 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*
Write a program that contains the first three variables (str, stringPTR, stringREF).
Your program must print the memory addresses and values of those.
*/
int main() 
{
	// • A string variable initialized to "HI THIS IS BRAIN".
    std::string str = "HI THIS IS BRAIN";
	
	// • stringPTR: a pointer to the string.
    std::string *stringPTR = &str;
	
	// • stringREF: a reference to the string.
    std::string &stringREF = str;

	// • The memory address of the string variable.
    std::cout << "Address of str:        " << &str << std::endl;
    
	// • The memory address held by stringPTR.
    std::cout << "Address of PTR itself: " << &stringPTR << std::endl;
	
	// • The memory address held by stringREF.
    std::cout << "Address of REF:        " << &stringREF << std::endl;
	
	// • The value of the string variable.
	std::cout << "Value of str:          " << str << std::endl;
	
	// • The value pointed to by stringPTR.
    std::cout << "Value of stringPTR:    " << *stringPTR << std::endl;
	
	// • The value pointed to by stringREF
    std::cout << "Value of stringREF:    " << stringREF << std::endl;

    return 0;
}
