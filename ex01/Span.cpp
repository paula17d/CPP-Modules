/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 01:14:32 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/28 18:07:45 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// default constructor
Span::Span() : _maxSize(UINT_MAX)
{
    // std::cout << GREEN << "Span created with default constructor." << RESET << std::endl;
}

// personalized constructor
Span::Span(unsigned int n)
{
    this->_maxSize = n;
    // std::cout << GREEN << "Span created with personalized constructor." << RESET << std::endl;
}

// copy constructor
Span::Span(const Span &other)
{
    _maxSize = other._maxSize;
    
    this->_nums.clear();
    // change capacity/size of this vector to capacity of other.vector
    this->_nums.resize(other._maxSize);
    // put content into 
    std::copy(other._nums.begin(), other._nums.end(), this->_nums.begin());

    // std::cout << GREEN << "Span created with copy constructor." << RESET << std::endl;
}

// copy assignment operator
Span Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _maxSize = other._maxSize;
    
        this->_nums.clear();
        // change capacity/size of this vector to capacity of other.vector
        this->_nums.resize(other._maxSize);
        // put content into 
        std::copy(other._nums.begin(), other._nums.end(), this->_nums.begin());
    }
    // std::cout << GREEN << "Span created with copy assignment oeprator." << RESET << std::endl;
    
    return *this;
}

// destructor
Span::~Span()
{
    // std::cout << RED << "Span destroyed with destructor." << RESET << std::endl;
}

// getters
std::vector<int> &Span::getNums()
{
    return this->_nums;
}

/*
to add a single number to the Span. It will be used in order to fill it. 
Any attempt to add a new element if there are already N elements stored 
should throw an exception.
*/
void Span::addNumber(int num)
{
    if (!(this->_nums.size() < this->_maxSize))
        throw SpanIsFull();

    this->_nums.push_back(num);
}

/*
Fill your Span using a range of iterators.
Making thousands of calls to addNumber() is so annoying. 
Implement a member function to add multiple numbers to your Span in a single call.
*/
void Span::addRangeOfNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{    
    size_t elementsToAdd = std::distance(begin, end);

    size_t futureSize = this->_nums.size() + elementsToAdd;
    if (futureSize > this->_maxSize)
        throw SpanIsFull();
        
    this->_nums.insert(this->_nums.end(), begin, end);
}

/*
They will respectively find out the shortest span or the longest span (or distance, if
you prefer) between all the numbers stored, and return it. 
If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.
*/
size_t Span::shortestSpan() const
{
    if (this->_nums.size() < 2)
        throw NoSpanFound();

    std::vector<int> sortedNums = this->_nums; 
    std::sort(sortedNums.begin(), sortedNums.end());

    size_t shortestSpan = UINT_MAX;
    for (size_t i = 0; i < sortedNums.size() - 1; i++)
    {
        size_t span = sortedNums[i + 1] - sortedNums[i];
        if (span < shortestSpan)
            shortestSpan = span;
    }
    return shortestSpan;
}

size_t Span::longestSpan() const
{
    if (this->_nums.size() < 2)
    throw NoSpanFound();

    std::vector<int> sortedNums = this->_nums;

    size_t maxNum = *std::max_element(sortedNums.begin(), sortedNums.end());
    size_t minNum = *std::min_element(sortedNums.begin(), sortedNums.end());
    
    size_t longestSpan = maxNum - minNum;
    return longestSpan;
}

const char* Span::SpanIsFull::what() const noexcept
{
    return "❌ Span container is already full.";
}

const char* Span::NoSpanFound::what() const noexcept
{
    return "❌ No span can be found.";
}

std::ostream& operator<<(std::ostream &out, const std::vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        if ((i + 1) == v.size())
            out << v[i];
        else
            out << v[i] << ", ";
    }

    return out;
}
