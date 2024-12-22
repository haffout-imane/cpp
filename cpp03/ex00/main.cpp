/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:07 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/18 18:40:05 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c1("imane");
    c1.attack("nada");
    c1.takeDamage(5);
    c1.beRepaired(10);
    c1.takeDamage(20);
    c1.attack("mounia");
}