/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:46:31 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/24 01:31:33 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    try
    {
        // Test 1: container type - vector
        {
            std::cout << BLUE << "TEST 1 - std::vector - find an element" << RESET << std::endl;
            
            // declare a vector here
            std::vector<int> v = {7, 8, 9, 10, 11};
            int num = 10;
        
            // put vector into function
            std::vector<int>::iterator it = easyfind(v, num);
        
            // print index of where num was found in vector
            std::cout << "Index of found num " << num << " is: " \
            << distance(v.begin(), it) << std::endl;
        }
    
        // Test 2: containter type - list
        {
            std::cout << BLUE << "TEST 2 - std::list - find an element" << RESET << std::endl;

            // declare a list here
            std::list<int> l = {7, 8, 9, 10, 11};
            int num = 10;
        
            // put list into function
            std::list<int>::iterator it = easyfind(l, num);
        
            // print index of where num was found in list
            std::cout << "Index of found num " << num << " is: " \
            << distance(l.begin(), it) << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}