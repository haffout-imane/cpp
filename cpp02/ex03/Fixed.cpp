/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 03:55:28 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/12 01:53:10 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    fp_number = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    // std::cout << "Copy constructor called" << std::endl; 
    *this = obj;
}

Fixed::Fixed(const int nbr)
{
    // std::cout << "Int constructor called" << std::endl;
    fp_number = nbr * (1 << f_bits);
}

Fixed::Fixed(const float nbr)
{
    // std::cout << "Float constructor called" << std::endl; 
    fp_number = roundf(nbr * (1 << f_bits));
}

Fixed   &Fixed::operator=(const Fixed &obj)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
        this->fp_number = obj.getRawBits();
    return(*this);
}

std::ostream    &operator<<(std::ostream &outstream, const Fixed &obj)
{
    return (outstream << obj.toFloat());
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

// geters and seters:
int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return(fp_number);
}

void Fixed::setRawBits(int const raw)
{
    fp_number = raw;
}

// converting functions:
float Fixed::toFloat(void) const
{
    return((float)fp_number / (1 << f_bits));
}

int Fixed::toInt(void) const
{
    return(fp_number >> f_bits);
}

// comparison operators:
bool    Fixed::operator>(Fixed fp)
{
    if(this->fp_number > fp.fp_number)
        return(true);
    return(false);
}

bool    Fixed::operator<(Fixed fp)
{
    if(this->fp_number < fp.fp_number)
        return(true);
    return(false);
}

bool    Fixed::operator>=(Fixed fp)
{
    if(this->fp_number >= fp.fp_number)
        return(true);
    return(false);
}

bool    Fixed::operator<=(Fixed fp)
{
    if(this->fp_number <= fp.fp_number)
        return(true);
    return(false);
}

bool    Fixed::operator==(Fixed fp)
{
    if(this->fp_number == fp.fp_number)
        return(true);
    return(false);
}

bool    Fixed::operator!=(Fixed fp)
{
    if(this->fp_number != fp.fp_number)
        return(true);
    return(false);
}

// arithmetic operators:
Fixed   Fixed::operator+(Fixed fp)
{
    return((Fixed(this->toFloat() + fp.toFloat())));
}

Fixed   Fixed::operator-(Fixed fp)
{
    return((Fixed(this->toFloat() - fp.toFloat())));    
}

Fixed   Fixed::operator*(Fixed fp)
{
    return(Fixed(this->toFloat() * fp.toFloat()));    
}

Fixed   Fixed::operator/(Fixed fp)
{
    return((Fixed(this->toFloat() / fp.toFloat())));
}

// increment/decrement:
Fixed    Fixed::operator++()
{
    this->fp_number++;
    return (*this);
}

Fixed    Fixed::operator--()
{
    this->fp_number--;
    return (*this);
}

Fixed    Fixed::operator++(int)
{
    Fixed   tmp = *this;
    this->fp_number++;
    return (tmp);
}
 
Fixed    Fixed::operator--(int)
{
    Fixed   tmp = *this;
    this->fp_number--;
    return (tmp);
}

// min and max functions:
Fixed   &Fixed::min(Fixed& fp_1, Fixed& fp_2)
{
    if(fp_1.fp_number < fp_2.fp_number)
        return(fp_1);
    return(fp_2);
}

const Fixed   &Fixed::min(const Fixed& fp_1, const Fixed& fp_2)
{
    if(fp_1.fp_number < fp_2.fp_number)
        return(fp_1);
    return(fp_2);
    
}

Fixed   &Fixed::max(Fixed& fp_1, Fixed& fp_2)
{
    if(fp_1.fp_number > fp_2.fp_number)
        return(fp_1);
    return(fp_2);
}

const Fixed   &Fixed::max(const Fixed& fp_1, const Fixed& fp_2)
{
    if(fp_1.fp_number > fp_2.fp_number)
        return(fp_1);
    return(fp_2);
}