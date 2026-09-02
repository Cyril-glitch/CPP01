/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 01:31:46 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/02 02:14:27 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void stream_init(char **av, std::ifstream &ifs, std::ofstream &ofs)
{
    std::string outFile;

    outFile = av[1];
    ifs.open(av[1]);
    ofs.open((outFile + ".replace").c_str());
    if (ifs.fail())
        std::cout << "failed to open :" << av[1] << std::endl;
    if (ofs.fail())
        std::cout << "failed to create :" << outFile << std::endl;
}

int main(int ac, char **av)
{  
    std::ifstream ifs;
    std::ofstream ofs;
    std::string tmp;
    std::string s1;
    std::string s2;

    if (ac != 4)
        std::cout << "Error : wrong arguments" << std::endl, 0; 
    stream_init(av, ifs, ofs);
    while (!ifs.eof())
    {
        ifs >> tmp;
        if (tmp == s1)
            tmp = s2;
        ofs << tmp << std::endl;
    } 
}