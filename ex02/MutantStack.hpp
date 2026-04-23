/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:25:21 by pauladretta       #+#    #+#             */
/*   Updated: 2026/04/24 00:41:14 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

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
        using iterator = typename std::stack<T>::container_type::iterator;
        using const_iterator = typename std::stack<T>::container_type::const_iterator;

        // default constructor
        MutantStack() = default;
        // copy constructor
        MutantStack(const MutantStack &other) = default;
        // copy assignment operator
        MutantStack &operator=(const MutantStack &other) = default;
        // destructor
        ~MutantStack() = default;
        // member functions
        iterator begin();
        const_iterator cbegin() const;
        iterator end();
        const_iterator cend() const;
};

/*
return an iterator that points to the beginning of the stack
- c is a member variable inside std::stack
- stands for the underlying container (usually a std::deque<T>)
*/
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
    return this->c.cbegin();
}

/*
return an iterator that points to the end of the stack
*/
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
    return this->c.cend();
}

#endif
