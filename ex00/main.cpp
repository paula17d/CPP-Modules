/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:46:31 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/20 16:15:26 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    // TODO: edit error return
    // TEST 1: container type - vector
    {
        // declare a vector here
        std::vector<int> v = {7, 8, 9, 10, 11};
        int num = 13;
    
        // put vector into function
        std::vector<int>::iterator it = easyfind(v, num);
    
        // print index of where num was found in vector
        std::cout << "Index of num " << num << " in vector: " \
        << distance(v.begin(), it) << std::endl;
    }

    // TEST 2: containter type - list
    {
        // declare a list here
        std::list<int> l = {7, 8, 9, 10, 11};
        int num = 10;
    
        // put list into function
        std::list<int>::iterator it = easyfind(l, num);
    
        // print index of where num was found in list
        std::cout << "Index of num " << num << " in list: " \
        << distance(l.begin(), it) << std::endl;
    }

    return 0;
}