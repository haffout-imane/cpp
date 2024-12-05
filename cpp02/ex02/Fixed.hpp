/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:40:01 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/05 04:26:03 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

    #include <iostream>
    #include <cmath>
class Fixed
{
    private: 
        int fp_number;
        static int const f_bits = 8;

    public:
        // Orthodox Canonical Form:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed   &operator=(const Fixed &obj);
        ~Fixed();
        
        // geters and seters:
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        // converting functions:
        float   toFloat(void) const;
        int     toInt(void) const;
        
        // comparison operators:
        bool    operator>(Fixed fp);
        bool    operator<(Fixed fp);
        bool    operator>=(Fixed fp);
        bool    operator<=(Fixed fp);
        bool    operator==(Fixed fp);
        bool    operator!=(Fixed fp);
        
        // arithmetic operators:
        Fixed   operator+(Fixed fp);
        Fixed   operator-(Fixed fp);
        Fixed   operator*(Fixed fp);
        Fixed   operator/(Fixed fp);
        
        // increment/decrement:
        Fixed   operator++();
        Fixed   operator--();
        Fixed   operator++(int); 
        Fixed   operator--(int);
        
        // min and max functions:
        static Fixed    &min(Fixed& fp_1, Fixed& fp_2);
        static const Fixed    &min(const Fixed& fp_1, const Fixed& fp_2);
        static Fixed    &max(Fixed& fp_1, Fixed& fp_2);
        static const Fixed    &max(const Fixed& fp_1, const Fixed& fp_2);
        
};

std::ostream    &operator<<(std::ostream &outstream, const Fixed &obj);


#endif