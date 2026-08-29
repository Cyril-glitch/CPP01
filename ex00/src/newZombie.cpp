/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 21:08:26 by cycolonn          #+#    #+#             */
/*   Updated: 2026/08/29 21:50:12 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/colors.hpp"
#include "../inc/Zombie.hpp"

Zombie* newZombie( std::string name )
{
    return new Zombie(name);
}