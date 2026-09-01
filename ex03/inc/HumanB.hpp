/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:27:39 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/01 23:00:51 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "../inc/Weapon.hpp"

class HumanB
{
    public :

        HumanB();
        HumanB(std::string name);
        ~HumanB();

        void attack();
        void setWeapon(Weapon& WeaponREF);

    private :
        
       std::string _name;
       Weapon* _weapon;
};

#endif