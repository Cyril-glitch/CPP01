/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 01:31:46 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/02 18:21:23 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/patcher.hpp"

int main(int ac, char **av)
{  
    std::ifstream ifs;
    std::ofstream ofs;
    std::string from;
    std::string to;

    if (ac != 4)
        return std::cout << BL_RED << "Error : wrong arguments" << RESET << std::endl, 0; 

    stream_init(av, ifs, ofs);     
    replace_init(av, from, to); 
    patcher(ifs, ofs, from, to);

    ifs.close();
    ofs.close();
}