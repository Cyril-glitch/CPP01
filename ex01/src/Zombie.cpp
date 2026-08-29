/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 20:51:22 by cycolonn          #+#    #+#             */
/*   Updated: 2026/08/29 22:56:59 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/colors.hpp"
#include "../inc/Zombie.hpp" 

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << MINT << _name << RESET << ICE_BLUE " is born." RESET << std::endl;
}

void Zombie::setname(const std::string name)
{
    _name = name;
}

void Zombie::announce(void) const
{
    std::cout << MINT << _name << RESET <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
}
