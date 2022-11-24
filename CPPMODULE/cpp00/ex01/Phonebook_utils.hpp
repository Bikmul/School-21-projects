#ifndef PHONEBOOK_UTILS_HPP

# define PHONEBOOK_UTILS_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

int	search_ui(Contact contacts[8]);
std::string	fix_width(std::string str, long unsigned max);
std::string	add_spaces(int n);

#endif