/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 05:58:00 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/24 22:46:59 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

    #include <iostream>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon(std::string type);
        Weapon(void);
        ~Weapon(void);
        void    setType(std::string type);
        const std::string&  getType() const;
        
};

#endif