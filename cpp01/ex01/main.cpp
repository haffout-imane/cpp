/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 04:03:25 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/24 04:41:56 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int nbr = 10;
    std::string name = "";
    if(nbr < 0)
        return(std::cerr << "you must enter a positive number of zombies!", 1);
    Zombie *zombie = zombieHorde(nbr, name);
    for(int i = 0; i < 10; i++)
        zombie[i].announce();
    delete[] zombie;
    return(0);
}