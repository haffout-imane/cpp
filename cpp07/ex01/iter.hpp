/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:57:03 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/04 23:05:14 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

    #include <iostream>

template<typename T, typename F>
void iter(T *arr, int len, void (*function)(F &))
{
    for (int i = 0; i < len; i++)
        function(arr[i]);
}

template<typename T>
void ft_print(T &var)
{
    std::cout << var << std::endl;
}

#endif
