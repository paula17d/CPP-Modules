/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:25:19 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/24 00:47:01 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main ()
{
    MutantStack<int> ms;
    ms.push(30);
    ms.push(50);
    ms.push(90);

    // Test 1 - begin
    {
        std::cout << BLUE << "**** TEST 1 - get oldest element in bottom of stack & iterating ****" << RESET << std::endl;
        std::cout << "Oldest element in stack: " << *ms.begin() << std::endl;
        MutantStack<int>::const_iterator it = ms.begin();
        // (*it)++; // cannot change value bc it is a constant iterator
        it++;
        std::cout << "Next element in stack: " << *it << std::endl;
    }

    // Test 2 - end
    {
        std::cout << BLUE << "**** TEST 2 - get element past the end of stack & iterating to newest element/top ****" << RESET << std::endl;
        std::cout << "Past-the-last element in stack: " << *ms.end() << std::endl;
        MutantStack<int>::const_iterator it = ms.end();
        it--;
        std::cout << "Newest element in stack: " << *it << std::endl;
    }
    
    // Test 3 - changing a value within a stack
    {
        std::cout << BLUE << "**** TEST 3 - changing a value within a stack ****" << RESET << std::endl;
        MutantStack<int>::iterator it = ms.end();
        it--;
        std::cout << "Old value of element in stack: " << *it << std::endl;
        *it = 1;
        std::cout << "New value of element in stack: " << *it << std::endl;
    }

    // Test 4 - [MutantStack] test main from the subject
    {
        std::cout << BLUE << "**** TEST 4 - [MutantStack] test main from the subject ****" << RESET << std::endl;
        MutantStack<int> mstack;
    
        mstack.push(5);
        mstack.push(17);
        
        std::cout << mstack.top() << std::endl;
        
        mstack.pop();
    
        std::cout << mstack.size() << std::endl;
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        
        std::stack<int> s(mstack);        
    }

    // Test 5 - [std::list] adjusted test main for another container
    {
        std::cout << BLUE << "**** TEST 5 - [std::list] adjusted test main for another container ****" << RESET << std::endl;
        std::list<int> l;
    
        l.push_back(5);
        l.push_back(17);
        
        std::cout << l.back() << std::endl;
        
        l.pop_back();
    
        std::cout << l.size() << std::endl;
        
        l.push_back(3);
        l.push_back(5);
        l.push_back(737);
        //[...]
        l.push_back(0);
        
        std::list<int>::iterator it = l.begin();
        std::list<int>::iterator ite = l.end();
        
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        
        std::list<int> s(l);     
    }

    return 0;
}
