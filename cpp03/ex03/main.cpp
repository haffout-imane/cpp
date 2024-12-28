/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:07 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 22:38:50 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("iamne");
    diamondTrap.attack("nada");
    diamondTrap.takeDamage(30);
    diamondTrap.beRepaired(20);
    diamondTrap.attack("mounia");
}