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
    *this = obj;
}

Character &Character::operator=(Character &obj)
{
    std::cout << "Character: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        this -> name = obj.getName();
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i])
                delete (materia[i]);
            if (obj.materia[i])
                this -> materia[i] = obj.materia[i];
        }
    }
    return (*this);
}

Character::~Character(void)
{
    std::cout << "Character: Destructor called!" << std::endl;
}

std::string Character::const &getName() 
{
    return (this -> name);
}

void Character::equip(AMateria *m)
{
    if(!materia)
        return;
    
}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter &target)
{

}

