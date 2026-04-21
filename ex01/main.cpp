/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:27:53 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/22 00:54:05 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
    Span testSpan(3); // change size here
    try
    {
        testSpan.addNumber(10);
        testSpan.addNumber(20);
        testSpan.addNumber(22);
        // testSpan.addNumber(50); // error: span is full
        std::cout << "{" << testSpan.getNums() << "}" << std::endl;

        std::cout << "Shortest Span: " << testSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << testSpan.longestSpan() << std::endl;

        // addMultipleNumbers
        
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
