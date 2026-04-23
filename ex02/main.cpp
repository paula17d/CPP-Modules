/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:25:19 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/23 16:37:12 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main ()
{
    // Test 1 - begin
    MutantStack<int> ms;
    ms.push(3);
    ms.push(5);
    ms.push(9);
    // std::cout << ms.top() << std::endl;
    std::cout << *ms.begin() << std::endl;
    MutantStack<int>::const_iterator itB = ms.begin();
    // (*it)++; // cannot change value bc it is a constant iterator
    std::cout << *itB << std::endl;

    // Test 2 - end
    std::cout << *ms.end() << std::endl;
    MutantStack<int>::const_iterator itE = ms.end();
    itE--;
    std::cout << *itE << std::endl;
    



    // --------
    std::stack<int> s;
    s.push(3);
    s.push(4);
    // std::cout << s.top() << std::endl;

    return 0;
}

// main from subject
// TODO: adjust main when using lists (ex. change push to push_back), make a seperate ft
// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//     std::cout << *it << std::endl;
//     ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }