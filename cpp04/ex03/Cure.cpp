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

Cure::Cure(Cure const &obj) : AMateria(obj)
{
    std::cout << "Cure: Copy constructor called!" << std::endl;
    *this = obj;
}

Cure::~Cure(void)
{
    std::cout << "Cure: Destructor called!" << std::endl;
}

Cure &Cure::operator=(Cure const &obj)
{
    std::cout << "Cure: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure(*this);
    if(!cure)
        exit(1);
    return (cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
