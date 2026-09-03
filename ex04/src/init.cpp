/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 18:00:03 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/03 18:20:39 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/patcher.hpp"

void stream_init(char **av, std::ifstream &ifs, std::ofstream &ofs)
{
    std::string outFile;

    outFile = av[1];
    ifs.open(av[1]);
    ofs.open((outFile + ".replace").c_str());
    if (ifs.fail())
        std::cout << BL_RED <<"failed to open :" << RESET <<av[1] << std::endl; 
    if (ofs.fail())
        std::cout << BL_RED <<"failed to create :" << RESET << outFile << std::endl;
}

void replace_init(char **av ,std::string &from , std::string &to)
{
    from = av[2];
    to = av[3];
}