/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 20:44:34 by cycolonn          #+#    #+#             */
/*   Updated: 2026/08/29 22:39:11 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie 
{
    public :
        Zombie();
        Zombie(const std::string name);
        ~Zombie();

        void setname(const std::string name);
        void announce(void) const;

    private :

        std::string _name;
};

Zombie* zombieHorde( int N, const std::string name );

#endif