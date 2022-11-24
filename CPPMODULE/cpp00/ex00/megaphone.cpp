#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << ("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    else
    {
        for (int i = 1; argv[i]; i++)
        {
           for(int j = 0; argv[i][j]; j++)
                if (char(argv[i][j]) <= 122 && char(argv[i][j] >= 97))
                    std::cout << char(argv[i][j] - 32);
                else
                    std::cout << char(argv[i][j]);
        }
    } 
    std::cout << std::endl;
    return (0);
}