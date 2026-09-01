/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:27:39 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/01 23:21:37 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../inc/Weapon.hpp"

class HumanA
{
    public :

        HumanA();
        HumanA(std::string name, Weapon& WeaponREF);
        ~HumanA();

        void attack();

    private :
        
       std::string _name;
       Weapon& _weapon;
};

#endif