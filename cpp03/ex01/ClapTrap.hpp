/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 02:22:03 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 22:03:14 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

    #include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &obj);
        virtual ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif