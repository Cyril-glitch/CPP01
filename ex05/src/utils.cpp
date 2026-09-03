/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:32:46 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/03 17:33:27 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include  "../inc/utils.hpp"

void getcmds(std::string &input)
{
    std::cout << std::endl;
    std::cout << MINT << "Please enter a complains level :" << RESET;
    std::getline(std::cin, input);
    std::cout << std::endl;
}