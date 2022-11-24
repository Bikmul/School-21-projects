#include "Phonebook.hpp"

int main(void)
{
    Phonebook   ph1;
    std::string str;
    while(1)
    {
        std::cout << "Enter a command > ";
        std::cin >> str;
        if (str == "EXIT" || str == "exit")
            exit(1); 
        else if (str == "ADD" || str == "add" || str == "Add")
            ph1.add();
        else
            ph1.search();
        if (std::cin.eof())
        {
            std::cout << std::endl;
            return(0);
        }
    }
    return (0);
}