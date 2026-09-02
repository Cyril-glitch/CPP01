/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patcher.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:56:15 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/02 18:22:01 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PATCHER_HPP
# define PATCHER_HPP

# include "../inc/colors.hpp"
# include  <iostream>
# include <fstream>

void stream_init(char **av, std::ifstream &ifs, std::ofstream &ofs);
void replace_init(char **av ,std::string &from , std::string &to);
void patcher(std::ifstream &ifs, std::ofstream &ofs, std::string from , std::string to);

#endif