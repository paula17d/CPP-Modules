
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Form z("User Z", 0, 10, 223);
    }
    catch (std::exception &e)
    {
        std::cerr << ORANGE << e.what() << RESET << std::endl;
    }

    return 0;
}

// TODO: start second page of subject ex01