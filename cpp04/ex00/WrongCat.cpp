/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 23:36:45 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/01 04:06:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrong cat")
{
    std::cout << "WrongCat: Default constructor called!" << std::endl;
}


WrongCat::WrongCat(WrongCat &obj) : WrongAnimal(obj)
{
    *this = obj;
    std::cout << "WrongCat: Copy constructor called!" << std::endl;

}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat: Destructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat: Copy assignment operator called!" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

void  WrongCat::makeSound(void) const
{
    std::cout << this->type << ": meows!" << std::endl;
}
