/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:23 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/01 04:04:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("cat")
{
    std::cout << "Cat: Default constructor called!" << std::endl;
}

Cat::Cat(Cat &obj) : Animal(obj)
{
    std::cout << "Cat: Copy constructor called!" << std::endl;
    *this = obj;
}

Cat::~Cat(void)
{
    std::cout << "Cat: Destructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat: Copy assignment operator called!" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

void  Cat::makeSound(void) const
{
    std::cout << this->type << ": meows!" << std::endl;
}
