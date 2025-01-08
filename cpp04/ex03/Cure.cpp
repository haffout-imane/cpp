/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 03:39:37 by marvin            #+#    #+#             */
/*   Updated: 2025/01/01 03:39:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure: Default constructor called!" << std::endl;
}

Cure::Cure(std::string & type) : AMateria("cure")
{
    std::cout << "Cure: Parameterized constructor called!" << std::endl;   
}

Cure::Cure(Cure &obj) : AMateria(obj)
{
    std::cout << "Cure: Copy constructor called!" << std::endl;
    *this = obj;
}

Cure::~Cure(void)
{
    std::cout << "Cure: Destructor called!" << std::endl;
}

Cure &Cure::operator=(Cure &obj)
{
    std::cout << "Cure: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return (*this);
}

Cure* Cure::clone() const
{

}

void Cure::use(ICharacter& target) const
{

}
