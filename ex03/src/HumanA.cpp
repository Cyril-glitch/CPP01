/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:44:39 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/03 18:07:21 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/colors.hpp"
#include "../inc/HumanA.hpp"


HumanA::HumanA(std::string name,Weapon &weaponREF) : _name(name), _weapon(weaponREF) 
{
}

void HumanA::attack()
{
    std::cout << ICE_BLUE << _name << RESET <<" " << "attacks with their " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}