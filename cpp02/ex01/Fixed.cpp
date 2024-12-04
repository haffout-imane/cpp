/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 03:55:28 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/04 01:37:19 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    fp_number = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl; 
    *this = obj;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    fp_number = nbr * (1 << f_bits);
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl; 
    fp_number = roundf(nbr * (1 << f_bits));
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->fp_number = obj.getRawBits();
    return(*this);
}

std::ostream& operator<<(std::ostream &outstream, const Fixed &obj)
{
    return (outstream << obj.toFloat());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(fp_number);
}

void Fixed::setRawBits(int const raw)
{
    fp_number = raw;
}

float Fixed::toFloat(void) const
{
    return((float)fp_number / (1 << f_bits));
}

int Fixed::toInt(void) const
{
    return(fp_number >> f_bits);
}