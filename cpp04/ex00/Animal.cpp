/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:40:37 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/29 01:54:04 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "Animal";
    std::cout << "Animal: Default constructor called!" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal: Parameterized constructor called!" << std::endl;
}

Animal::Animal(Animal &obj)
{
    *this = obj;
    std::cout << "Animal: Copy constructor called!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called!" << std::endl;
}

Animal  &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal: Copy assignment operator called!" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal: speaking" << std::endl;
}

std::string Animal::getType(void) const
{
    return(this->type);
}