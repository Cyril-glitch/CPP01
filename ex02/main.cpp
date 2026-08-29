/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 23:04:27 by cycolonn          #+#    #+#             */
/*   Updated: 2026/08/29 23:30:16 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include <iostream>
#include <string>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << MINT "The memory address of the string variable : " RESET << &string << std::endl
              << LAVENDER "The memory address held by stringPTR : " RESET << stringPTR << std::endl
              << ICE_BLUE "The memory address held by stringREF : " RESET << &stringREF << std::endl
              << MINT "The value of the string variable : " RESET << string << std::endl
              << LAVENDER "The value pointed to by stringPTR : " RESET << *stringPTR << std::endl
              << ICE_BLUE "The value pointed to by stringREF : " RESET << stringREF << std::endl;
    return 0;
}