/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:43:41 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/04 20:29:43 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

    #include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}   

template<typename T>
T &min(T &a, T &b)
{
    if(a < b)
        return a;
    return b;
}   
template<typename T>
T &max(T &a, T &b)
{
    if(a > b)
        return a;
    return b;   
}  

#endif