/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:30:58 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/24 03:31:24 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "  => Stack zombies:" << std::endl;
    {
        Zombie zombie1;
        Zombie zombie2("imane");
        randomChump("imane2");
        
        zombie1.announce();
        zombie2.announce(); 
    }
    std::cout << std::endl;
    std::cout << "  => Heap zombies:" << std::endl;
    {
        Zombie *Zombie1;
        Zombie1 = newZombie("iamne");
        Zombie1->announce();
        delete(Zombie1);
    }
}