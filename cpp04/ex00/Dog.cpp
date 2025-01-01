/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:25 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/01 04:04:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("dog")
{
    std::cout << "Dog: Default constructor called!" << std::endl;
}

Dog::Dog(Dog &obj) : Animal(obj)
{
    std::cout << "Dog: Copy constructor called!" << std::endl;
    *this = obj;

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