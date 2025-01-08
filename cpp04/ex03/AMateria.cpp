/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 02:43:26 by marvin            #+#    #+#             */
/*   Updated: 2025/01/02 23:54:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "AMateria: Default constructor called!" << std::endl;
    this->type = "Default";
}

AMateria::AMateria(std::string & type)
{
    std::cout << "AMateria: Parameterized constructor called!" << std::endl;
    this->type = type;    
}

AMateria::AMateria(AMateria &obj)
{
    std::cout << "AMateria: Copy constructor called!" << std::endl;
    *this = obj;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria: Destructor called!" << std::endl;
}

AMateria &AMateria::operator=(AMateria &obj)
{
    std::cout << "AMateria: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        this->type = obj->type;
    }
    return (*this);
}


std::string const &AMateria::getType() const
{
    return(this->type);
}
