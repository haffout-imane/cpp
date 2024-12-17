/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:00 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/14 09:39:45 by ihaffout         ###   ########.fr       */
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
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "" << std::endl;
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    
}
