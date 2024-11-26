/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 05:58:05 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/25 01:56:10 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

    #include <iostream>
    #include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;

    public:
        HumanB(std::string name);
        void    setWeapon(Weapon &weapon);
        void    attack(void);
        
};

#endif