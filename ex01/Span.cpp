#include "Span.hpp"

// default constructor
Span::Span() : _N(UINT_MAX)
{
    std::cout << GREEN << "Span created with default constructor." << RESET << std::endl;
}

// personalized constructor
Span::Span(unsigned int n) : _N(n)
{
    std::cout << GREEN << "Span created with personalized constructor." << RESET << std::endl;
}

// copy constructor
Span::Span(const Span &other)
{
    _N = other._N;
    
    this->_nums.clear();
    // change capacity/size of this vector to capacity of other.vector
    this->_nums.resize(other._N);
    // put content into 
    std::copy(other._nums.begin(), other._nums.end(), this->_nums.begin());

    std::cout << GREEN << "Span created with copy constructor." << RESET << std::endl;
}

// copy assignment operator
Span Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _N = other._N;
    
        this->_nums.clear();
        // change capacity/size of this vector to capacity of other.vector
        this->_nums.resize(other._N);
        // put content into 
        std::copy(other._nums.begin(), other._nums.end(), this->_nums.begin());
    }
    std::cout << GREEN << "Span created with copy assignment oeprator." << RESET << std::endl;
    return *this;
}

// destructor
Span::~Span()
{
    std::cout << RED << "Span destroyed with destructor." << RESET << std::endl;
}