/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 21:22:12 by cycolonn          #+#    #+#             */
/*   Updated: 2026/08/29 22:54:24 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/colors.hpp"
#include "../inc/Zombie.hpp"

int main (void)
{
    int N;
    std::string name;
    Zombie* horde;

    N = 10;
    name = "Bob";
    horde = zombieHorde(N, name);
    for(int i = 0; i < N; i++)
    {
        std::cout << ICE_BLUE
                  << name << " "<< i << " present ?"
                  << RESET
                  << std::endl;
        horde[i].announce();
    }
    delete [] horde;
    return 0;
}