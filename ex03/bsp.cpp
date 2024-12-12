/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 04:39:53 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/06 04:44:35 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Fixed calculate_area(Point const a, Point const b, Point const c)
{
    Fixed result = ((a.getX() * (b.getY() - c.getY()) + 
                     b.getX() * (c.getY() - a.getY()) + 
                     c.getX() * (a.getY() - b.getY())).toFloat() / 2.0f);
    if (result < 0)
            result = result * -1;
    return(result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed abc = calculate_area(a, b, c);
    Fixed abp = calculate_area(a, b, point);
    Fixed bcp = calculate_area(b, c, point);
    Fixed cap = calculate_area(c, a, point);
    if(abp > 0 && bcp > 0 && cap > 0 && abc > 0)
    {
        if((abp + bcp + cap) == abc)
            return(true);
    }
    return(false);
}