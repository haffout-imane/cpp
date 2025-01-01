/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:40:37 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/31 23:20:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal: Default constructor called!" << std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal: Parameterized constructor called!" << std::endl;
    this->type = type;
}

Animal::Animal(Animal &obj)
{
    std::cout << "Animal: Copy constructor called!" << std::endl;
    *this = obj;
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

std::string Animal::getType(void) const
{
    return(this->type);
}