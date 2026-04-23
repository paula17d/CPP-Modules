#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_GREEN "\033[38;5;120m"
#define RESET "\033[0m"

class Span
{
    private: 
        std::vector<int> _nums; // vector filled w digits/numbers
        unsigned int _N; // size/capacity of vector

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
        // getters
        std::vector<int> &getNums();
        // member function
        void addNumber(int num);
        size_t shortestSpan() const;
        size_t longestSpan() const;
        void addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        // exceptions
        class SpanIsFull : public std::exception
        {
            public:
                const char *what() const noexcept;
        };
        class NoSpanFound : public std::exception
        {
            public:
                const char *what() const noexcept;
        };
};

// output operator
std::ostream& operator<<(std::ostream &out, const std::vector<int>& v);

#endif
