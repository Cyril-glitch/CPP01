/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 20:08:19 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/02 21:07:00 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include "../inc/colors.hpp"
# include <iostream>

class Harl
{
    public :

        Harl();
        ~Harl();
        void complain( std::string level );

    private :

        std::string level[4];
        void (Harl::*f[4])(void);
        
        int getindex(std::string input);
        void debug( void );
        void info(void);
        void warning(void);
        void error(void);
};

void getcmds(std::string &input);

#endif