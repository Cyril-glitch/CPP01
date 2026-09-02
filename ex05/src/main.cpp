/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 19:58:26 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/02 21:14:25 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"


int main()
{
    Harl harl;
    std::string complains;

    while(true)
    {
        getcmds(complains);
        if (complains == "EXIT")
            break;
        harl.complain(complains);
    }
    std::cout << ICE_BLUE << "Harl: " << RESET << "\"Bye !\"" << std::endl;
}
