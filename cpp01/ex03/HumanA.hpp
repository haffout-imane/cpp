/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 05:57:57 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/24 23:57:19 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

    #include <iostream>
    #include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;

    public:
        HumanA(std::string name, Weapon &weapon);
        void    attack(void);
        
};

#endif