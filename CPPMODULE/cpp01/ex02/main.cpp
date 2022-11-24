#include "string"
#include "iostream"

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strptr = &str;
    std::string &strref = str;

    std::cout << "The memory address of the string variable\t " << &str << std::endl;
    std::cout << "The memory address held by stringPTR\t\t " << strptr << std::endl;
    std::cout << "The memory address held by stringREF\t\t " << &strref << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< std::endl;
    std::cout << "The value of the string variable\t " << str << std::endl;
    std::cout << "The value pointed to by stringPTR\t " << *strptr << std::endl;
    std::cout << "The value pointed to by stringREF\t " << strref << std::endl;
    return(0); 
}