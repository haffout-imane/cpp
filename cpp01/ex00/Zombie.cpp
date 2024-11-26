/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:26:37 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/24 03:01:59 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    Zombie::name = "Default";
}

Zombie::Zombie(std::string name)
{
    Zombie::name = name;
}

Zombie::~Zombie()
{
    std::cout << Zombie::name << " is destroyed!" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}