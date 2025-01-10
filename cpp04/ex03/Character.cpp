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

Character::Character(void) : slots(), leftMateria()
{
    std::cout << "Character: Default constructor called!" << std::endl;
    this -> name = "Random";
    this -> used_slots = 0;
}

Character::Character(std::string name) : slots(), leftMateria()
{
    std::cout << "Character: Parameterized constructor called!" << std::endl;
    this -> name = name;
    this -> used_slots = 0;
}

Character::Character(Character &obj)
{
    std::cout << "Character: Copy constructor called!" << std::endl;
    *this = obj;
}

Character &Character::operator=(Character &obj)
{
    std::cout << "Character: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        this -> name = obj.name;
        this -> used_slots = obj.used_slots;
        for (int i = 0; i < 4; i++)
        {
            if (this->slots[i])
                delete (slots[i]);
            if (obj.slots[i])
                this -> slots[i] = obj.slots[i];
        }
    }
    return (*this);
}

Character::~Character(void)
{
    std::cout << "Character: Destructor called!" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i])
            delete (slots[i]);
    }
    delete leftMateria;
}

std::string const &Character::getName() const
{
    return (this -> name);
}

void Character::equip(AMateria *m)
{
    if(!m)
        return;
    if(used_slots == 4)
    {
        std::cout << "the slots are full!" << std::endl;
        delete m;
        return;
    }
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        if(!slots[i])
        {
            slots[i] = m;
            break;
        }
    }
    std::cout << "the materia " << m->getType() << " is equiped in the slot " << i << std::endl;
    used_slots++;
    return;
}

void Character::unequip(int idx)
{
    if(idx < 0 || idx > 3)
    {
        std::cout << " * Invalid index!" << std::endl;
        return;
    }
    if(leftMateria)
        delete leftMateria;
    leftMateria = slots[idx];
    slots[idx] = NULL;
    std::cout << "the materia " << idx << " is unequiped!" << std::endl;
    used_slots--;
    return;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << " * Invalid index!" << std::endl;
        return;
    }
    if (!slots[idx])
        std::cout << "the slot " << idx << " is empty" << std::endl;
    else
        slots[idx]->use(target);
    return ;
}

