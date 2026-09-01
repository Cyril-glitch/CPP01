/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:44:39 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/01 23:43:39 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"
#include "../inc/colors.hpp"


HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
}

void HumanB::setWeapon(Weapon& WeaponREF)
{
    _weapon = &WeaponREF; 
}

void HumanB::attack()
{
    if (_weapon == NULL)
        std::cout << MINT << _name << RESET <<" " << "can't attack : they are unarmed" << std::endl;
    else
        std::cout << MINT << _name << RESET << " " << "attacks with their " << _weapon->getType() << std::endl;     
}

HumanB::~HumanB()
{
}