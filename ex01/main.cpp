/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:27:53 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/24 01:15:25 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
    Span sp1(20); // change size here for error: span is full
    try
    {
        // Test 1 - calculate spans
        std::cout << BLUE << "TEST 1 - calculate spans" << RESET << std::endl;
        sp1.addNumber(10);
        sp1.addNumber(22);
        sp1.addNumber(20);

        std::cout << "Shortest Span: " << sp1.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp1.longestSpan() << std::endl;

        // Test 2 - insert range
        std::cout << BLUE << "TEST 2 - insert a range of integers into span" << RESET << std::endl;
        Span sp2(10);
        sp2.addNumber(77);
        sp2.addNumber(44);
        sp2.addNumber(55);
        sp2.addNumber(33);
        
        std::vector<int>::iterator begin = sp2.getNums().begin();
        std::vector<int>::iterator end = sp2.getNums().end();
        
        std::cout << "Range of integers: " << "{" << sp2.getNums() << "}" << std::endl;
        sp1.addMultipleNumbers(begin, end);
        std::cout << "New complete span: " << "{" << sp1.getNums() << "}" << std::endl;

        // Test 3 - span with 10,000 numbers
        std::cout << BLUE << "TEST 3 - test span with 10,000 numbers" << RESET << std::endl;
        Span sp3(10000);
        for (int i = 0; i < 10000; i++)
        {
            sp3.addNumber(i);
        }
        std::cout << sp3.getNums() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}



// main from subject
// int main()
// {
//     Span sp = Span(5);
    
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
    
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

//     return 0;
// }
