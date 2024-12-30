/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:23 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/30 22:51:35 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat: Default constructor called!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
    if (!this->brain)
    {
        std::cout << "Cat brain allocation have been failed" << std::endl;
        exit(1);
    }
}

Cat::Cat(std::string type)
{
    std::cout << "Cat: Parameterized constructor called!" << std::endl;
    this->type = type;
    this->brain = new Brain();
    if (!this->brain)
    {
        std::cout << "Cat brain allocation have been failed" << std::endl;
        exit(1);
    }
}

Cat::Cat(Cat &obj)
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
    {
        this->type = obj.type;
        *this->brain = *obj.brain;
    }
    return(*this);
}

void  Cat::makeSound(void) const
{
    std::cout << this->type << ": meows!" << std::endl;
    delete this->brain;
}
