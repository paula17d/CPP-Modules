#include <iostream>
#include <cctype>

int main (int argc, char **argv)
{    
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string line = argv[i];
            std::transform(line.begin(), line.end(), line.begin(), ::toupper);
            std::cout << line ;
        }
    }
    std::cout << std::endl;

    return (0);
}
