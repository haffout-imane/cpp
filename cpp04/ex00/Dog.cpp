/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:25 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/26 01:08:20 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "Dog: Default constructor called!" << std::endl;
}

Dog::Dog(std::string type)
{
    this->type = type;
    std::cout << "Dog: Parameterized constructor called!" << std::endl;
}

Dog::Dog(Dog &obj)
{
    *this = obj;
    std::cout << "Dog: Copy constructor called!" << std::endl;

}

Dog::~Dog(void)
{
    std::cout << "Dog: Destructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog: Copy assignment operator called!" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

void  Dog::makeSound(void) const
{
    std::cout << this->type << ": bark!" << std::endl;
}