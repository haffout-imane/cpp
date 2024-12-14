/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 04:40:28 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/06 04:21:47 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float nbr1, const float nbr2) : x(Fixed(nbr1)), y(Fixed(nbr2))
{
}

Point::Point(const Point &obj) : x(obj.x) , y(obj.y)
{
}

Point   &Point::operator=(const Point &obj)
{
    if (this == &obj)
        return (*this);
    return (*this);
}

Point::~Point()
{
}

Fixed    Point::getX() const
{
    return(x);
}

Fixed    Point::getY() const
{
    return(y);
}
