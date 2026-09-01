/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 00:37:29 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/02 01:02:07 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
    std::ifstream ifs;
    std::ifstream ofs;
    std::string tmp;
    std::string s1;
    std::string s2;

    if (ac != 4)
        return std::cout << "Error: wrong arguments" << std::endl, 0; 
}