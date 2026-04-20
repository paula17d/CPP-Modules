#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

/*
Write a function template easyfind that accepts a type T. 
It takes two parameters:
the first one is of type T, and the second one is an integer.

Assuming T is a container of integers, 
this function has to find the first occurrence of the second parameter 
in the first parameter.

If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave.
*/
template<typename T>
typename T::iterator easyfind(T &container, int num)
{
    // if failure: returns iteratorto element or end() like behavior of standard containers
    return std::find(container.begin(), container.end(), num); 
}

#endif