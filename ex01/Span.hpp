#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>>
#include <vector>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_GREEN "\033[38;5;120m"
#define RESET "\033[0m"

class Span
{
    private: 
        unsigned int _N;
        std::vector<int> _nums;

    public:
        // default constructor
        Span();
        // personalized constructor
        Span(unsigned int n);
        // copy constructor
        Span(const Span &other);
        // copy assignment operator
        Span operator=(const Span &other);
        // destructor
        ~Span();
};

#endif