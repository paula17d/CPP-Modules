/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:25:21 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/23 16:28:30 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_GREEN "\033[38;5;120m"
#define RESET "\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
    private:

    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        // default constructor
        MutantStack();
        // copy constructor
        MutantStack(const MutantStack &other);
        // copy assignment operator
        MutantStack &operator=(const MutantStack &other);
        // destructor
        ~MutantStack();
        // member functions
        iterator begin();
        const_iterator begin() const;
        iterator end();
        const_iterator end() const;
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
    std::cout << GREEN << "MutantStack created with default constructor." << RESET << std::endl;  
}

// TODO: finish constructor, destructor, ,,,






/*
return an iterator that points to the beginning of the stack
- c is a member variable inside std::stack
- stands for the underlying container (usually a std::deque<T>)
*/
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return std::stack<T>::c.cbegin();
}

/*
return an iterator that points to the end of the stack
*/
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return std::stack<T>::c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return std::stack<T>::c.cend();
}

#endif
