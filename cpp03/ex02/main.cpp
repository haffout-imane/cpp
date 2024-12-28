/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:07 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 22:37:52 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("iamne");
    fragTrap.attack("nada");
    fragTrap.takeDamage(30);
    fragTrap.beRepaired(20);
    fragTrap.attack("mounia");
}