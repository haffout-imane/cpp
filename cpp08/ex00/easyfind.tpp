/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:21:31 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/08 00:22:37 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T p1, int p2)
{
    typename T::iterator it = std::find(p1.begin(), p1.end(), p2);
    if(it == p1.end())
        throw std::runtime_error("Element not found");
    return it;
}

