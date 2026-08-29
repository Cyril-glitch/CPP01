/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 20:51:22 by cycolonn          #+#    #+#             */
/*   Updated: 2026/08/29 21:53:24 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/colors.hpp"
#include "../inc/Zombie.hpp" 

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << MINT << _name << RESET << ICE_BLUE " is born." RESET << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << MINT << _name << RESET <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << MINT << _name << RESET << BL_PURPLE " is dead." RESET << std::endl;
    return;
}
