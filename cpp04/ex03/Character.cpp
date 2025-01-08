/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 07:41:39 by marvin            #+#    #+#             */
/*   Updated: 2025/01/08 07:41:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Character: Default constructor called!" << std::endl;
}

Character::Character(std::string name)
{
    std::cout << "Character: Parameterized constructor called!" << std::endl;
}

Character::Character(Character &objd)
{
    std::cout << "Character: Copy constructor called!" << std::endl;
}

Character &Character::operator=(Character &obj)
{
    std::cout << "Character: Copy assignment operator called!" << std::endl;
}

Character::~Character(void)
{
    std::cout << "Character: Destructor called!" << std::endl;
}
