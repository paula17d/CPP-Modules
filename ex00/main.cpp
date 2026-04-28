/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:46:31 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/28 18:12:32 by pdrettas         ###   ########.fr       */
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
            
            std::vector<int> v = {7, 8, 9, 10, 11};
            int num = 10;
        
            std::vector<int>::iterator it = easyfind(v, num);
        
            std::cout << "Index of found num " << num << " is: " \
            << distance(v.begin(), it) << std::endl;
        }
    
        // Test 2: containter type - list
        {
            std::cout << BLUE << "TEST 2 - std::list - find an element" << RESET << std::endl;

            std::list<int> l = {7, 8, 9, 10, 11};
            int num = 10;
        
            std::list<int>::iterator it = easyfind(l, num);
        
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