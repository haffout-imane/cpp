/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:54:19 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/19 01:46:17 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

    #include "FragTrap.hpp"
    #include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &obj);
        DiamondTrap& operator=(const DiamondTrap &obj);
        ~DiamondTrap();
        
        void    attack(const std::string &target);
        void whoAmI();

        unsigned int    getHitPoints();
        unsigned int    getEnergyPoints();
        unsigned int    getAttackDamage();
    
};

#endif