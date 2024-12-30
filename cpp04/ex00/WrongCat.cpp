/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 23:36:45 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/28 23:53:07 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "WrongCat: Default constructor called!" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
    this->type = type;
    std::cout << "WrongCat: Parameterized constructor called!" << std::endl;
}

WrongCat::WrongCat(WrongCat &obj)
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
