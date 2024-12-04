/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:40:01 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/04 01:35:50 by ihaffout         ###   ########.fr       */
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
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed& operator=(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};
        std::ostream& operator<<(std::ostream &outstream, const Fixed &obj);


#endif