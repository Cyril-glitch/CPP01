/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:19:02 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/01 22:04:15 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
    setType(type);
}

const std::string& Weapon::getType(void) const
{
    return (_type);
}

void Weapon::setType(std::string newType)
{
    _type = newType;
}

Weapon::~Weapon(void)
{

}