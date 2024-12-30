/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:25 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/30 22:51:47 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog: Default constructor called!" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
    if (!this->brain)
    {
        std::cout << "Cat brain allocation have been failed" << std::endl;
        exit(1);
    }
}

Dog::Dog(std::string type)
{
    std::cout << "Dog: Parameterized constructor called!" << std::endl;
    this->type = type;
    this->brain = new Brain();
    if (!this->brain)
    {
        std::cout << "Cat brain allocation have been failed" << std::endl;
        exit(1);
    }
}

Dog::Dog(Dog &obj)
{
    std::cout << "Dog: Copy constructor called!" << std::endl;
    *this = obj;
}

Dog::~Dog(void)
{
    std::cout << "Dog: Destructor called!" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
        *this->brain = *obj.brain;
    }
    return(*this);
}

void  Dog::makeSound(void) const
{
    std::cout << this->type << ": bark!" << std::endl;
}