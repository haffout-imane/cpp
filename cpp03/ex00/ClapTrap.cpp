/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:00 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/14 12:24:27 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called!" << std::endl;
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Parameterized constructor called!" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
    *this = obj;
}

ClapTrap    &ClapTrap::operator=(ClapTrap &obj)
{
    if(this != &obj)
    {
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(!this->energyPoints)
        std::cout << "ClapTrap " << this->name << " can't attack " << target << ", energy points is not enough!" << std::endl;
    else if (!this->hitPoints)
        std::cout << "ClapTrap " << this->name << " can't attack " << target << ", hit points is not enough!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;   
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount >= this->hitPoints)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        this->hitPoints = 0;
    }
    else
    {
        std::cout << "ClapTrap " << name << " took " << amount << " damage!" << std::endl;
        this->hitPoints -= amount;        
    }
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(!this->energyPoints)
        std::cout << "ClapTrap " << this->name << " can't repairs itself, energy points is not enough!" << std::endl;
    else if (!this->hitPoints)
        std::cout << "ClapTrap " << this->name << " can't repairs itself, hit points is not enough!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << name << " repaired itself with " << amount << " hit points!" << std::endl; 
        this->energyPoints--;
        this->hitPoints += amount;      
    }
    return;
}
