/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:07 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 22:36:54 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("imane");
    clapTrap.attack("nada");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(10);
    clapTrap.takeDamage(20);
    clapTrap.attack("mounia");
}