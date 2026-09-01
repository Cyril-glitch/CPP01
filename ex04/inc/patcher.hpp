/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patch.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 01:02:27 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/02 01:07:45 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class Patch
{
    public :

        Patch(char** av);
        ~Patch();

    private :

        std::ifstream _ifs;
        std::ifstream _ofs;
        std::string s1;
        std::string s2;
        std::string tmp;
}