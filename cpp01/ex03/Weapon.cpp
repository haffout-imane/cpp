/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:27:43 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/25 01:53:27 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string&  Weapon::getType() const
{
    return(type);
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::Weapon()
{
    this->type = "default_weapon";
}

Weapon::~Weapon()
{
}