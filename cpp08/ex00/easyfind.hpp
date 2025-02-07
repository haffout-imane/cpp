/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:21:33 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/07 21:32:24 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

    #include "iostream"
    #include <vector>

template<typename T>
typename T::iterator easyfind(T p1, int p2);

    #include "easyfind.tpp"

#endif
