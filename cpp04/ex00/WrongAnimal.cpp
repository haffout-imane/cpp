/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 23:34:45 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/29 01:52:37 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal: Default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal: Parameterized constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &obj)
{
    *this = obj;
    std::cout << "WrongAnimal: Copy constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called!" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal: Copy assignment operator called!" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal: speaking" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}