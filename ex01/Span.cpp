#include "Span.hpp"

// default constructor
Span::Span() : _N(UINT_MAX)
{
    std::cout << GREEN << "Span created with default constructor." << RESET << std::endl;
}

// personalized constructor
Span::Span(unsigned int n)
{
    // std::cout << "{ n w p const" << _N << "}" << std::endl;
    this->_N = n;
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
    if (!(this->_nums.size() < this->_N))
    {
        throw SpanIsFull();
    }
    this->_nums.push_back(num);
}

/*
Fill your Span using a range of iterators.
Making thousands of calls to addNumber() is so annoying. 
Implement a member function to add multiple numbers to your Span in a single call.
*/
void Span::addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    // TODO: add check if num is full
    this->_nums.insert(this->_nums.end() -1, begin, end);
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

    std::vector<int> sortedNums = this->_nums; // to not change the actual vector
    std::sort(sortedNums.begin(), sortedNums.end());

    size_t shortestSpan = UINT_MAX;
    for (int i = 0; i < sortedNums.size() - 1; i++)
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

    std::vector<int> sortedNums = this->_nums; // to not change the actual vector

    size_t maxNum = *std::max_element(sortedNums.begin(), sortedNums.end());
    size_t minNum = *std::min_element(sortedNums.begin(), sortedNums.end());
    
    size_t longestSpan = maxNum - minNum;
    return longestSpan;
}

const char* Span::SpanIsFull::what() const noexcept
{
    return "Span container is already full.";
}

const char* Span::NoSpanFound::what() const noexcept
{
    return "No span can be found.";
}

// print
std::ostream& operator<<(std::ostream &out, const std::vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if ((i + 1) == v.size())
            out << v[i];
        else
            out << v[i] << ", ";
    }

    return out;
}