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

// getters
std::vector<int> Span::getNums()
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
    // if _nums vector size is smaller than _N
        // add a single number to the Span
    if (!(this->_nums.size() < this->_N))
    {
        throw SpanIsFull();
    }
    
    this->_nums.push_back(num);
}

const char* Span::SpanIsFull::what() const noexcept
{
    return "Span is already full.";
}



// print
std::ostream& operator<<(std::ostream &out, const Span &s)
{
    
    for (int i = 0; i <= s.get; i++)
    {
        out <<
    }

    return out;
}