/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 03:55:28 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/12 01:26:17 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    fp_number = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl; 
    *this = obj;
}

Fixed   &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->fp_number = obj.getRawBits();
    return(*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// geters and seters:
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(fp_number);
}

void Fixed::setRawBits(int const raw)
{
    fp_number = raw;
}