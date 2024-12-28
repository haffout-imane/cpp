/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:51:25 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 22:23:27 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap: Default constructor called!" << std::endl;
    name = "Default";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap: Parameterized constructor called!" << std::endl;
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;     
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj)
{
    *this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
        FragTrap::operator=(obj);
        ScavTrap::operator=(obj);
        this->name = obj.name;
        this->hitPoints = obj.FragTrap::hitPoints;
        this->energyPoints = obj.ScavTrap::energyPoints;
        this->attackDamage = obj.FragTrap::attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: Destructor called!" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

unsigned int    DiamondTrap::getHitPoints()
{
    return(hitPoints);
}

unsigned int    DiamondTrap::getEnergyPoints()
{
    return(energyPoints);
}

unsigned int    DiamondTrap::getAttackDamage()
{
    return(attackDamage);
}
