/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 21:22:12 by cycolonn          #+#    #+#             */
/*   Updated: 2026/08/29 21:48:15 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main (void)
{
    Zombie* newZ;

    newZ = newZombie("NewZombie");
    newZ->announce();
    delete newZ;
    randomChump("ramdom");
    return 0;
}