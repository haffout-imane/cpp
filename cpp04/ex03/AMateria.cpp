/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 02:43:26 by marvin            #+#    #+#             */
/*   Updated: 2025/01/09 01:11:06 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria: Parameterized constructor called!" << std::endl;
    this->type = type;    
}

AMateria::AMateria(AMateria const &obj)
{
    std::cout << "AMateria: Copy constructor called!" << std::endl;
    *this = obj;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria: Destructor called!" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &obj)
{
    std::cout << "AMateria: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return (*this);
}


std::string const &AMateria::getType() const
{
    return(this->type);
}
