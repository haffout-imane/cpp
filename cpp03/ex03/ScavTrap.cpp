/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 12:26:53 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 22:21:07 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap: Default constructor called!" << std::endl;
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
    std::cout << "ScavTrap: Parameterized constructor called!" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    *this = obj;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &obj)
{
    if(this != &obj)
        ClapTrap::operator=(obj);
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructor called!" << std::endl;
}


void ScavTrap::attack(const std::string &target)
{
    if(!this->energyPoints)
        std::cout << "ScavTrap " << this->name << " can't attack " << target << ", energy points is not enough!" << std::endl;
    else if (!this->hitPoints)
        std::cout << "ScavTrap " << this->name << " can't attack " << target << ", hit points is not enough!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    return;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
}
