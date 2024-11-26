/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 03:52:31 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/25 06:12:20 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    Zombie::name = "Default";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << Zombie::name << " is destroyed!" << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}