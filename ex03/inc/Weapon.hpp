/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 21:11:01 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/01 22:59:00 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>


class Weapon
{
    public :
 
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        
        void setType(std::string newType);
        const std::string& getType() const;

    private :

        std::string _type;  
};

#endif