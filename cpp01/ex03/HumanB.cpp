/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:05:13 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/25 01:58:01 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    weapon = NULL;
    this->name = name;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if (weapon)
    {
        std::cout 
        << this->name 
        << " attacks with their " 
        << weapon->getType()
        << std::endl;   
    }
    else
    {
        std::cout 
        << this->name 
        << " has no weapon to attack with " 
        << std::endl;   
        
    }
}