/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:07 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/22 17:15:37 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dt("ibrahim");
    
    std::cout << "Hit points: " << dt.getHitPoints() << std::endl;
    std::cout << "Energy points: " << dt.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << dt.getAttackDamage() << std::endl;
    
    dt.ScavTrap::attack("enemy");
    dt.whoAmI();

    dt.guardGate();
    dt.highFivesGuys();

}