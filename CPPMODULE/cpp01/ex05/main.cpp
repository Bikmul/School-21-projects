#include "Karen.hpp"
#include "iostream"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        Karen karen;

        karen.complain("DEBUG");
        karen.complain("INFO");
        karen.complain("WARNING");
        karen.complain("ERROR");
        return(0);
    }
    else if (argc == 2)
    {
        std::string str = argv[1];
        while(str != "EXIT")
        {
            Karen karen;

            karen.complain(str);
            return(0);
        }
    }
}