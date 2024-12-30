/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:23 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/25 23:02:34 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Cat: Default constructor called!" << std::endl;
}

Cat::Cat(std::string type)
{
    this->type = type;
    std::cout << "Cat: Parameterized constructor called!" << std::endl;
}

Cat::Cat(Cat &obj)
{
    *this = obj;
    std::cout << "Cat: Copy constructor called!" << std::endl;

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
