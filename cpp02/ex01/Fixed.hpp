/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:40:01 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/05 04:32:26 by ihaffout         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream &outstream, const Fixed &obj);


#endif