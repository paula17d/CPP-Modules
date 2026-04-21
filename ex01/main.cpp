#include "Span.hpp"

int main ()
{
    // Test 1 - trying to add a number to the Span if it's not full yet
    Span spanOne(2);
    try
    {
        spanOne.addNumber(67);
        // print the entire vector
        std::cout << spanOne.getNums() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}