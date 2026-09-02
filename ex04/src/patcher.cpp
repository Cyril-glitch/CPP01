/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patcher.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:53:05 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/02 18:18:15 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/patcher.hpp"


void replace(std::string &buf, std::string from, std::string to)
{
    size_t pos = 0;

    while ((pos = buf.find(from)) != std::string::npos)
    {
        buf.erase(pos, from.length());
        buf.insert(pos, to);
        pos += to.size();
    }
}

void patcher(std::ifstream &ifs, std::ofstream &ofs, std::string from , std::string to)
{
    std::string buf;

    while (std::getline(ifs, buf))
    {
        replace(buf, from ,to);
        ofs << buf << std::endl;
    }
}