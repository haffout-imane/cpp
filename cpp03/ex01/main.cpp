/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:07 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 22:37:22 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("imane");
    scavTrap.attack("nada");
    scavTrap.takeDamage(50);
    scavTrap.beRepaired(60);
    scavTrap.guardGate();
}