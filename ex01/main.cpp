/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:27:53 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/22 13:32:46 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
    Span testSpan(20); // change size here
    try
    {
        testSpan.addNumber(10);
        testSpan.addNumber(22);
        testSpan.addNumber(20);
        // testSpan.addNumber(50); // error: span is full
        // std::cout << "{" << testSpan.getNums().size() << "}" << std::endl;
        // std::cout << "{" << testSpan._N << "}" << std::endl;

        // // std::cout << "Shortest Span: " << testSpan.shortestSpan() << std::endl;
        // std::cout << "Longest Span: " << testSpan.longestSpan() << std::endl;

        // addMultipleNumbers
        Span newSpan(10);
        newSpan.addNumber(78);
        newSpan.addNumber(43);
        newSpan.addNumber(22);
        newSpan.addNumber(3);
        
        std::vector<int>::iterator begin = newSpan.getNums().begin();
         std::cout << "{ it2 = " << *(begin) << "}" << std::endl;
        std::vector<int>::iterator end = (newSpan.getNums().end())-1;
        
    //     while(begin != end)
    // {
    //      std::cout << "{ it = " << *(begin) << "}" << std::endl;
    //     begin++;
    // }
        // std::cout << "{" << *(newSpan.getNums().begin()) << "}" << std::endl;
        // std::cout << "{" << *(newSpan.getNums().end() - 1) << "}" << std::endl;
        std::cout << "{" << newSpan.getNums() << "}" << std::endl;
        testSpan.addMultipleNumbers(begin, end);
        std::cout << "{" << testSpan.getNums() << "}" << std::endl;
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
