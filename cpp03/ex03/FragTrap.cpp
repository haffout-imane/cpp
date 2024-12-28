/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:05:59 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 22:22:32 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap: Default constructor called!" << std::endl;
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name)
{
    std::cout << "FragTrap: Parameterized constructor called!" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;
}

FragTrap&   FragTrap::operator=(const FragTrap &obj)
{
    if(this != &obj)
        ClapTrap::operator=(obj);
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destructor called!" << std::endl;
}


void    FragTrap::highFivesGuys( void )
{    
    std::cout << "High fives from ur freind FragTrap " << this->name << " !"<< std::endl;
}
