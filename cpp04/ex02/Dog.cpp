/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:25 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/01 04:57:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("dog")
{
    std::cout << "Dog: Default constructor called!" << std::endl;
    this->brain = new Brain();
    if (!this->brain)
    {
        std::cout << "Dog brain alloDogion have been failed" << std::endl;
        exit(1);
    }
}

Dog::Dog(Dog &obj) : Animal(obj)
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

const std::string Dog::getBrainIdeas(int index) const
{
    return this->brain->getIdea(index);
}

void Dog::setBrainIdeas(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}