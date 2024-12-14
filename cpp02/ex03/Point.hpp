/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 04:40:31 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/05 22:33:40 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

    #include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    
    public:
        Point();
        Point(const float nb1, const float nb2);
        Point(const Point &obj);
        Point   &operator=(const Point &obj);
        ~Point();
        Fixed    getX() const;
        Fixed    getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif