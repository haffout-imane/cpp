/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 03:39:35 by marvin            #+#    #+#             */
/*   Updated: 2025/01/01 03:39:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice: Default constructor called!" << std::endl;
}

Ice::Ice(std::string & type) : AMateria("ice")
{
    std::cout << "Ice: Parameterized constructor called!" << std::endl;   
}

Ice::Ice(Ice &obj) : AMateria(obj)
{
    std::cout << "Ice: Copy constructor called!" << std::endl;
    *this = obj;
}

Ice::~Ice(void)
{
    std::cout << "Ice: Destructor called!" << std::endl;
}

Ice &Ice::operator=(Ice &obj)
{
    std::cout << "Ice: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return (*this);
}

Ice* Ice::clone() const
{

}

void Ice::use(ICharacter& target) const
{

}