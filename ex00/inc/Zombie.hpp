/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 20:44:34 by cycolonn          #+#    #+#             */
/*   Updated: 2026/08/29 21:49:11 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie 
{
    public :
        Zombie(std::string name);
        ~Zombie();

        void announce(void);

    private :

        std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif